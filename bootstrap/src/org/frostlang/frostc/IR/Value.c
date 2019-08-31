#include "org/frostlang/frostc/IR/Value.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/Type.h"
#include "org/frostlang/frostc/MethodDecl.h"
#include "frost/core/Int.h"
#include "frost/core/Bit.h"
#include "frost/core/Frost.h"
#include "frost/core/UInt64.h"
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
typedef frost$core$String* (*$fn383)(frost$core$Object*);
typedef frost$core$String* (*$fn428)(frost$core$Object*);
typedef frost$core$String* (*$fn436)(frost$core$Object*);
typedef frost$core$String* (*$fn445)(frost$core$Object*);
typedef frost$core$String* (*$fn478)(frost$core$Object*);
typedef frost$core$String* (*$fn491)(frost$core$Object*);
typedef frost$core$String* (*$fn507)(frost$core$Object*);
typedef frost$core$String* (*$fn540)(frost$core$Object*);
typedef frost$core$String* (*$fn548)(frost$core$Object*);
typedef frost$core$String* (*$fn555)(frost$core$Object*);
typedef frost$core$String* (*$fn565)(frost$core$Object*);
typedef frost$core$String* (*$fn573)(frost$core$Object*);
typedef frost$core$String* (*$fn592)(frost$core$Object*);
typedef frost$core$String* (*$fn612)(frost$core$Object*);

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
static frost$core$String $s380 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x52\x2e\x66\x72\x6f\x73\x74", 8, -2819236116625154610, NULL };
static frost$core$String $s381 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 85, 7956123242512134102, NULL };
static frost$core$String $s386 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x45\x54\x48\x4f\x44\x28", 7, 2331827984905210120, NULL };
static frost$core$String $s388 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s393 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s399 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x45\x54\x48\x4f\x44\x28", 7, 2331827984905210120, NULL };
static frost$core$String $s401 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s425 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x52\x2e\x66\x72\x6f\x73\x74", 8, -2819236116625154610, NULL };
static frost$core$String $s426 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 85, 7956123242512134102, NULL };
static frost$core$String $s431 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x45\x54\x48\x4f\x44\x53\x28", 8, -7839998384989860573, NULL };
static frost$core$String $s433 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s440 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s448 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x45\x54\x48\x4f\x44\x53\x28\x3c\x6e\x75\x6c\x6c\x3e\x2c\x20", 16, -6072472196044889926, NULL };
static frost$core$String $s450 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s475 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x52\x2e\x66\x72\x6f\x73\x74", 8, -2819236116625154610, NULL };
static frost$core$String $s476 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 85, 7956123242512134102, NULL };
static frost$core$String $s481 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x47\x45\x4e\x45\x52\x49\x43\x5f\x4d\x45\x54\x48\x4f\x44\x28", 15, -2534768582544642278, NULL };
static frost$core$String $s483 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s488 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s495 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s502 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x47\x45\x4e\x45\x52\x49\x43\x5f\x4d\x45\x54\x48\x4f\x44\x28", 15, -2534768582544642278, NULL };
static frost$core$String $s504 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s511 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s537 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x52\x2e\x66\x72\x6f\x73\x74", 8, -2819236116625154610, NULL };
static frost$core$String $s538 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 85, 7956123242512134102, NULL };
static frost$core$String $s543 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x47\x45\x4e\x45\x52\x49\x43\x5f\x4d\x45\x54\x48\x4f\x44\x53\x28", 16, -3200037640513296683, NULL };
static frost$core$String $s545 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s552 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s559 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s568 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x47\x45\x4e\x45\x52\x49\x43\x5f\x4d\x45\x54\x48\x4f\x44\x53\x28\x3c\x6e\x75\x6c\x6c\x3e\x2c\x20", 24, 5095604785473417468, NULL };
static frost$core$String $s570 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s577 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s595 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x55\x50\x45\x52\x28", 6, -8750088808033524428, NULL };
static frost$core$String $s597 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s615 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x54\x59\x50\x45\x28", 5, 7370278550074045823, NULL };
static frost$core$String $s617 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s620 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x52\x2e\x66\x72\x6f\x73\x74", 8, -2819236116625154610, NULL };

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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:450
frost$core$Int* $tmp2 = &param0->$rawValue;
frost$core$Int $tmp3 = *$tmp2;
frost$core$Int $tmp4 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IR.frost:451:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:452
org$frostlang$frostc$Type* $tmp15 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp15));
org$frostlang$frostc$Type* $tmp16 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp16));
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return $tmp15;
block3:;
frost$core$Int $tmp17 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IR.frost:454:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:455
org$frostlang$frostc$Type* $tmp28 = *(&local1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp28));
org$frostlang$frostc$Type* $tmp29 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp29));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
return $tmp28;
block6:;
frost$core$Int $tmp30 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IR.frost:457:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:458
org$frostlang$frostc$Type* $tmp41 = *(&local2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp41));
org$frostlang$frostc$Type* $tmp42 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp42));
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
return $tmp41;
block9:;
frost$core$Int $tmp43 = (frost$core$Int) {3u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IR.frost:460:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:461
org$frostlang$frostc$Type* $tmp54 = *(&local3);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp54));
org$frostlang$frostc$Type* $tmp55 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp55));
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
return $tmp54;
block12:;
frost$core$Int $tmp56 = (frost$core$Int) {4u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IR.frost:463:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:464
org$frostlang$frostc$Type* $tmp65 = *(&local4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp65));
org$frostlang$frostc$Type* $tmp66 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp66));
*(&local4) = ((org$frostlang$frostc$Type*) NULL);
return $tmp65;
block15:;
frost$core$Int $tmp67 = (frost$core$Int) {5u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IR.frost:466:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:467
org$frostlang$frostc$Type* $tmp78 = *(&local5);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp78));
org$frostlang$frostc$Type* $tmp79 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp79));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
return $tmp78;
block18:;
frost$core$Int $tmp80 = (frost$core$Int) {6u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IR.frost:469:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:470
org$frostlang$frostc$Type* $tmp91 = *(&local6);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp91));
org$frostlang$frostc$Type* $tmp92 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp92));
*(&local6) = ((org$frostlang$frostc$Type*) NULL);
return $tmp91;
block21:;
frost$core$Int $tmp93 = (frost$core$Int) {7u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IR.frost:472:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:473
org$frostlang$frostc$Type* $tmp104 = *(&local7);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp104));
org$frostlang$frostc$Type* $tmp105 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp105));
*(&local7) = ((org$frostlang$frostc$Type*) NULL);
return $tmp104;
block24:;
frost$core$Int $tmp106 = (frost$core$Int) {8u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IR.frost:475:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:476
org$frostlang$frostc$Type* $tmp117 = *(&local8);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp117));
org$frostlang$frostc$Type* $tmp118 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp118));
*(&local8) = ((org$frostlang$frostc$Type*) NULL);
return $tmp117;
block27:;
frost$core$Int $tmp119 = (frost$core$Int) {9u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IR.frost:478:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:479
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
frost$core$Int $tmp136 = (frost$core$Int) {10u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IR.frost:481:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:482
org$frostlang$frostc$Type* $tmp149 = *(&local11);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp149));
org$frostlang$frostc$Type* $tmp150 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp150));
*(&local11) = ((org$frostlang$frostc$Type*) NULL);
return $tmp149;
block33:;
frost$core$Int $tmp151 = (frost$core$Int) {13u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IR.frost:484:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:485
org$frostlang$frostc$Type* $tmp160 = *(&local12);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp160));
org$frostlang$frostc$Type* $tmp161 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp161));
*(&local12) = ((org$frostlang$frostc$Type*) NULL);
return $tmp160;
block36:;
frost$core$Int $tmp162 = (frost$core$Int) {14u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IR.frost:487:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:488
org$frostlang$frostc$Type* $tmp173 = *(&local13);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp173));
org$frostlang$frostc$Type* $tmp174 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp174));
*(&local13) = ((org$frostlang$frostc$Type*) NULL);
return $tmp173;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:491
frost$core$Int $tmp175 = (frost$core$Int) {491u};
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:496
frost$core$Int* $tmp177 = &param0->$rawValue;
frost$core$Int $tmp178 = *$tmp177;
frost$core$Int $tmp179 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IR.frost:497:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:498
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
frost$core$Int $tmp194 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IR.frost:500:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:501
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
frost$core$Int $tmp209 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IR.frost:503:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:504
frost$core$Int $tmp220 = *(&local2);
frost$core$Int$wrapper* $tmp221;
$tmp221 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp221->value = $tmp220;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from IR.frost:504:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn223 $tmp222 = ($fn223) ((frost$core$Object*) $tmp221)->$class->vtable[0];
frost$core$String* $tmp224 = $tmp222(((frost$core$Object*) $tmp221));
frost$core$String* $tmp225 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s226, $tmp224);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp225));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp225));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp224));
frost$core$String* $tmp227 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp225, &$s228);
org$frostlang$frostc$Type* $tmp229 = *(&local3);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from IR.frost:504:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
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
frost$core$Int $tmp237 = (frost$core$Int) {4u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IR.frost:506:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:507
org$frostlang$frostc$Type* $tmp246 = *(&local4);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from IR.frost:507:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
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
frost$core$Int $tmp255 = (frost$core$Int) {3u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IR.frost:509:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:510
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
frost$core$Int $tmp273 = (frost$core$Int) {5u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IR.frost:512:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:513
frost$core$Int $tmp284 = *(&local6);
frost$core$Int$wrapper* $tmp285;
$tmp285 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp285->value = $tmp284;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from IR.frost:513:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn287 $tmp286 = ($fn287) ((frost$core$Object*) $tmp285)->$class->vtable[0];
frost$core$String* $tmp288 = $tmp286(((frost$core$Object*) $tmp285));
frost$core$String* $tmp289 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s290, $tmp288);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp289));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp289));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp288));
frost$core$String* $tmp291 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp289, &$s292);
org$frostlang$frostc$Type* $tmp293 = *(&local7);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from IR.frost:513:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
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
frost$core$Int $tmp301 = (frost$core$Int) {6u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IR.frost:515:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:516
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
frost$core$Int $tmp316 = (frost$core$Int) {7u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IR.frost:518:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:519
org$frostlang$frostc$IR$Statement$ID $tmp327 = *(&local9);
org$frostlang$frostc$IR$Statement$ID$wrapper* $tmp328;
$tmp328 = (org$frostlang$frostc$IR$Statement$ID$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$ID$wrapperclass);
$tmp328->value = $tmp327;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from IR.frost:519:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn330 $tmp329 = ($fn330) ((frost$core$Object*) $tmp328)->$class->vtable[0];
frost$core$String* $tmp331 = $tmp329(((frost$core$Object*) $tmp328));
frost$core$String* $tmp332 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s333, $tmp331);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp332));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp332));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp331));
frost$core$String* $tmp334 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp332, &$s335);
org$frostlang$frostc$Type* $tmp336 = *(&local10);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from IR.frost:519:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
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
frost$core$Int $tmp344 = (frost$core$Int) {8u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IR.frost:521:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:522
frost$core$String* $tmp355 = *(&local11);
frost$core$String* $tmp356 = frost$core$String$format$frost$core$String$R$frost$core$String($tmp355, &$s357);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp356));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp356));
frost$core$String* $tmp358 = *(&local11);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp358));
*(&local11) = ((frost$core$String*) NULL);
return $tmp356;
block34:;
frost$core$Int $tmp359 = (frost$core$Int) {9u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IR.frost:524:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:525
org$frostlang$frostc$IR$Value* $tmp373 = *(&local12);
frost$core$Bit $tmp374 = (frost$core$Bit) {$tmp373 != NULL};
bool $tmp375 = $tmp374.value;
if ($tmp375) goto block39; else goto block40;
block39:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:526
org$frostlang$frostc$IR$Value* $tmp376 = *(&local12);
frost$core$Bit $tmp377 = (frost$core$Bit) {$tmp376 != NULL};
bool $tmp378 = $tmp377.value;
if ($tmp378) goto block41; else goto block42;
block42:;
frost$core$Int $tmp379 = (frost$core$Int) {526u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s380, $tmp379, &$s381);
abort(); // unreachable
block41:;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from IR.frost:526:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn383 $tmp382 = ($fn383) ((frost$core$Object*) $tmp376)->$class->vtable[0];
frost$core$String* $tmp384 = $tmp382(((frost$core$Object*) $tmp376));
frost$core$String* $tmp385 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s386, $tmp384);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp385));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp385));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp384));
frost$core$String* $tmp387 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp385, &$s388);
org$frostlang$frostc$MethodDecl* $tmp389 = *(&local13);
frost$core$String* $tmp390 = org$frostlang$frostc$MethodDecl$get_declaration$R$frost$core$String($tmp389);
frost$core$String* $tmp391 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp387, $tmp390);
frost$core$String* $tmp392 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp391, &$s393);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp392));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp392));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp391));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp390));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp387));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp385));
org$frostlang$frostc$MethodDecl* $tmp394 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp394));
*(&local13) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$IR$Value* $tmp395 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp395));
*(&local12) = ((org$frostlang$frostc$IR$Value*) NULL);
return $tmp392;
block40:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:528
org$frostlang$frostc$MethodDecl* $tmp396 = *(&local13);
frost$core$String* $tmp397 = org$frostlang$frostc$MethodDecl$get_declaration$R$frost$core$String($tmp396);
frost$core$String* $tmp398 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s399, $tmp397);
frost$core$String* $tmp400 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp398, &$s401);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp400));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp400));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp398));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp397));
org$frostlang$frostc$MethodDecl* $tmp402 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp402));
*(&local13) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$IR$Value* $tmp403 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp403));
*(&local12) = ((org$frostlang$frostc$IR$Value*) NULL);
return $tmp400;
block37:;
frost$core$Int $tmp404 = (frost$core$Int) {10u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IR.frost:530:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp405 = $tmp178.value;
int64_t $tmp406 = $tmp404.value;
bool $tmp407 = $tmp405 == $tmp406;
frost$core$Bit $tmp408 = (frost$core$Bit) {$tmp407};
bool $tmp409 = $tmp408.value;
if ($tmp409) goto block44; else goto block45;
block44:;
org$frostlang$frostc$IR$Value** $tmp410 = (org$frostlang$frostc$IR$Value**) (param0->$data + 0);
org$frostlang$frostc$IR$Value* $tmp411 = *$tmp410;
*(&local14) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp411));
org$frostlang$frostc$IR$Value* $tmp412 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp412));
*(&local14) = $tmp411;
org$frostlang$frostc$FixedArray** $tmp413 = (org$frostlang$frostc$FixedArray**) (param0->$data + 8);
org$frostlang$frostc$FixedArray* $tmp414 = *$tmp413;
*(&local15) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp414));
org$frostlang$frostc$FixedArray* $tmp415 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp415));
*(&local15) = $tmp414;
org$frostlang$frostc$Type** $tmp416 = (org$frostlang$frostc$Type**) (param0->$data + 16);
org$frostlang$frostc$Type* $tmp417 = *$tmp416;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:531
org$frostlang$frostc$IR$Value* $tmp418 = *(&local14);
frost$core$Bit $tmp419 = (frost$core$Bit) {$tmp418 != NULL};
bool $tmp420 = $tmp419.value;
if ($tmp420) goto block47; else goto block48;
block47:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:532
org$frostlang$frostc$IR$Value* $tmp421 = *(&local14);
frost$core$Bit $tmp422 = (frost$core$Bit) {$tmp421 != NULL};
bool $tmp423 = $tmp422.value;
if ($tmp423) goto block49; else goto block50;
block50:;
frost$core$Int $tmp424 = (frost$core$Int) {532u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s425, $tmp424, &$s426);
abort(); // unreachable
block49:;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from IR.frost:532:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn428 $tmp427 = ($fn428) ((frost$core$Object*) $tmp421)->$class->vtable[0];
frost$core$String* $tmp429 = $tmp427(((frost$core$Object*) $tmp421));
frost$core$String* $tmp430 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s431, $tmp429);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp430));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp430));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp429));
frost$core$String* $tmp432 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp430, &$s433);
org$frostlang$frostc$FixedArray* $tmp434 = *(&local15);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from IR.frost:532:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn436 $tmp435 = ($fn436) ((frost$core$Object*) $tmp434)->$class->vtable[0];
frost$core$String* $tmp437 = $tmp435(((frost$core$Object*) $tmp434));
frost$core$String* $tmp438 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp432, $tmp437);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp438));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp438));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp437));
frost$core$String* $tmp439 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp438, &$s440);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp439));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp439));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp438));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp432));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp430));
org$frostlang$frostc$FixedArray* $tmp441 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp441));
*(&local15) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$IR$Value* $tmp442 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp442));
*(&local14) = ((org$frostlang$frostc$IR$Value*) NULL);
return $tmp439;
block48:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:534
org$frostlang$frostc$FixedArray* $tmp443 = *(&local15);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from IR.frost:534:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn445 $tmp444 = ($fn445) ((frost$core$Object*) $tmp443)->$class->vtable[0];
frost$core$String* $tmp446 = $tmp444(((frost$core$Object*) $tmp443));
frost$core$String* $tmp447 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s448, $tmp446);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp447));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp447));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp446));
frost$core$String* $tmp449 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp447, &$s450);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp449));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp449));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp447));
org$frostlang$frostc$FixedArray* $tmp451 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp451));
*(&local15) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$IR$Value* $tmp452 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp452));
*(&local14) = ((org$frostlang$frostc$IR$Value*) NULL);
return $tmp449;
block45:;
frost$core$Int $tmp453 = (frost$core$Int) {11u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IR.frost:536:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp454 = $tmp178.value;
int64_t $tmp455 = $tmp453.value;
bool $tmp456 = $tmp454 == $tmp455;
frost$core$Bit $tmp457 = (frost$core$Bit) {$tmp456};
bool $tmp458 = $tmp457.value;
if ($tmp458) goto block54; else goto block55;
block54:;
org$frostlang$frostc$IR$Value** $tmp459 = (org$frostlang$frostc$IR$Value**) (param0->$data + 0);
org$frostlang$frostc$IR$Value* $tmp460 = *$tmp459;
*(&local16) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp460));
org$frostlang$frostc$IR$Value* $tmp461 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp461));
*(&local16) = $tmp460;
org$frostlang$frostc$MethodDecl** $tmp462 = (org$frostlang$frostc$MethodDecl**) (param0->$data + 8);
org$frostlang$frostc$MethodDecl* $tmp463 = *$tmp462;
*(&local17) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp463));
org$frostlang$frostc$MethodDecl* $tmp464 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp464));
*(&local17) = $tmp463;
org$frostlang$frostc$FixedArray** $tmp465 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
org$frostlang$frostc$FixedArray* $tmp466 = *$tmp465;
*(&local18) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp466));
org$frostlang$frostc$FixedArray* $tmp467 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp467));
*(&local18) = $tmp466;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:537
org$frostlang$frostc$IR$Value* $tmp468 = *(&local16);
frost$core$Bit $tmp469 = (frost$core$Bit) {$tmp468 != NULL};
bool $tmp470 = $tmp469.value;
if ($tmp470) goto block57; else goto block58;
block57:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:538
org$frostlang$frostc$IR$Value* $tmp471 = *(&local16);
frost$core$Bit $tmp472 = (frost$core$Bit) {$tmp471 != NULL};
bool $tmp473 = $tmp472.value;
if ($tmp473) goto block59; else goto block60;
block60:;
frost$core$Int $tmp474 = (frost$core$Int) {538u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s475, $tmp474, &$s476);
abort(); // unreachable
block59:;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from IR.frost:538:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn478 $tmp477 = ($fn478) ((frost$core$Object*) $tmp471)->$class->vtable[0];
frost$core$String* $tmp479 = $tmp477(((frost$core$Object*) $tmp471));
frost$core$String* $tmp480 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s481, $tmp479);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp480));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp480));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp479));
frost$core$String* $tmp482 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp480, &$s483);
org$frostlang$frostc$MethodDecl* $tmp484 = *(&local17);
frost$core$String* $tmp485 = org$frostlang$frostc$MethodDecl$get_declaration$R$frost$core$String($tmp484);
frost$core$String* $tmp486 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp482, $tmp485);
frost$core$String* $tmp487 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp486, &$s488);
org$frostlang$frostc$FixedArray* $tmp489 = *(&local18);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from IR.frost:538:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn491 $tmp490 = ($fn491) ((frost$core$Object*) $tmp489)->$class->vtable[0];
frost$core$String* $tmp492 = $tmp490(((frost$core$Object*) $tmp489));
frost$core$String* $tmp493 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp487, $tmp492);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp493));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp493));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp492));
frost$core$String* $tmp494 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp493, &$s495);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp494));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp494));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp493));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp487));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp486));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp485));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp482));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp480));
org$frostlang$frostc$FixedArray* $tmp496 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp496));
*(&local18) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$MethodDecl* $tmp497 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp497));
*(&local17) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$IR$Value* $tmp498 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp498));
*(&local16) = ((org$frostlang$frostc$IR$Value*) NULL);
return $tmp494;
block58:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:540
org$frostlang$frostc$MethodDecl* $tmp499 = *(&local17);
frost$core$String* $tmp500 = org$frostlang$frostc$MethodDecl$get_declaration$R$frost$core$String($tmp499);
frost$core$String* $tmp501 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s502, $tmp500);
frost$core$String* $tmp503 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp501, &$s504);
org$frostlang$frostc$FixedArray* $tmp505 = *(&local18);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from IR.frost:540:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn507 $tmp506 = ($fn507) ((frost$core$Object*) $tmp505)->$class->vtable[0];
frost$core$String* $tmp508 = $tmp506(((frost$core$Object*) $tmp505));
frost$core$String* $tmp509 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp503, $tmp508);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp509));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp509));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp508));
frost$core$String* $tmp510 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp509, &$s511);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp510));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp510));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp509));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp503));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp501));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp500));
org$frostlang$frostc$FixedArray* $tmp512 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp512));
*(&local18) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$MethodDecl* $tmp513 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp513));
*(&local17) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$IR$Value* $tmp514 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp514));
*(&local16) = ((org$frostlang$frostc$IR$Value*) NULL);
return $tmp510;
block55:;
frost$core$Int $tmp515 = (frost$core$Int) {12u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IR.frost:542:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp516 = $tmp178.value;
int64_t $tmp517 = $tmp515.value;
bool $tmp518 = $tmp516 == $tmp517;
frost$core$Bit $tmp519 = (frost$core$Bit) {$tmp518};
bool $tmp520 = $tmp519.value;
if ($tmp520) goto block64; else goto block65;
block64:;
org$frostlang$frostc$IR$Value** $tmp521 = (org$frostlang$frostc$IR$Value**) (param0->$data + 0);
org$frostlang$frostc$IR$Value* $tmp522 = *$tmp521;
*(&local19) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp522));
org$frostlang$frostc$IR$Value* $tmp523 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp523));
*(&local19) = $tmp522;
org$frostlang$frostc$FixedArray** $tmp524 = (org$frostlang$frostc$FixedArray**) (param0->$data + 8);
org$frostlang$frostc$FixedArray* $tmp525 = *$tmp524;
*(&local20) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp525));
org$frostlang$frostc$FixedArray* $tmp526 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp526));
*(&local20) = $tmp525;
org$frostlang$frostc$FixedArray** $tmp527 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
org$frostlang$frostc$FixedArray* $tmp528 = *$tmp527;
*(&local21) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp528));
org$frostlang$frostc$FixedArray* $tmp529 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp529));
*(&local21) = $tmp528;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:543
org$frostlang$frostc$IR$Value* $tmp530 = *(&local19);
frost$core$Bit $tmp531 = (frost$core$Bit) {$tmp530 != NULL};
bool $tmp532 = $tmp531.value;
if ($tmp532) goto block67; else goto block68;
block67:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:544
org$frostlang$frostc$IR$Value* $tmp533 = *(&local19);
frost$core$Bit $tmp534 = (frost$core$Bit) {$tmp533 != NULL};
bool $tmp535 = $tmp534.value;
if ($tmp535) goto block69; else goto block70;
block70:;
frost$core$Int $tmp536 = (frost$core$Int) {544u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s537, $tmp536, &$s538);
abort(); // unreachable
block69:;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from IR.frost:544:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn540 $tmp539 = ($fn540) ((frost$core$Object*) $tmp533)->$class->vtable[0];
frost$core$String* $tmp541 = $tmp539(((frost$core$Object*) $tmp533));
frost$core$String* $tmp542 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s543, $tmp541);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp542));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp542));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp541));
frost$core$String* $tmp544 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp542, &$s545);
org$frostlang$frostc$FixedArray* $tmp546 = *(&local20);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from IR.frost:544:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn548 $tmp547 = ($fn548) ((frost$core$Object*) $tmp546)->$class->vtable[0];
frost$core$String* $tmp549 = $tmp547(((frost$core$Object*) $tmp546));
frost$core$String* $tmp550 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp544, $tmp549);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp550));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp550));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp549));
frost$core$String* $tmp551 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp550, &$s552);
org$frostlang$frostc$FixedArray* $tmp553 = *(&local21);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from IR.frost:544:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn555 $tmp554 = ($fn555) ((frost$core$Object*) $tmp553)->$class->vtable[0];
frost$core$String* $tmp556 = $tmp554(((frost$core$Object*) $tmp553));
frost$core$String* $tmp557 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp551, $tmp556);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp557));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp557));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp556));
frost$core$String* $tmp558 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp557, &$s559);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp558));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp558));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp557));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp551));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp550));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp544));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp542));
org$frostlang$frostc$FixedArray* $tmp560 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp560));
*(&local21) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp561 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp561));
*(&local20) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$IR$Value* $tmp562 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp562));
*(&local19) = ((org$frostlang$frostc$IR$Value*) NULL);
return $tmp558;
block68:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:546
org$frostlang$frostc$FixedArray* $tmp563 = *(&local20);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from IR.frost:546:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn565 $tmp564 = ($fn565) ((frost$core$Object*) $tmp563)->$class->vtable[0];
frost$core$String* $tmp566 = $tmp564(((frost$core$Object*) $tmp563));
frost$core$String* $tmp567 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s568, $tmp566);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp567));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp567));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp566));
frost$core$String* $tmp569 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp567, &$s570);
org$frostlang$frostc$FixedArray* $tmp571 = *(&local21);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from IR.frost:546:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn573 $tmp572 = ($fn573) ((frost$core$Object*) $tmp571)->$class->vtable[0];
frost$core$String* $tmp574 = $tmp572(((frost$core$Object*) $tmp571));
frost$core$String* $tmp575 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp569, $tmp574);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp575));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp575));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp574));
frost$core$String* $tmp576 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp575, &$s577);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp576));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp576));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp575));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp569));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp567));
org$frostlang$frostc$FixedArray* $tmp578 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp578));
*(&local21) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp579 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp579));
*(&local20) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$IR$Value* $tmp580 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp580));
*(&local19) = ((org$frostlang$frostc$IR$Value*) NULL);
return $tmp576;
block65:;
frost$core$Int $tmp581 = (frost$core$Int) {13u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IR.frost:548:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp582 = $tmp178.value;
int64_t $tmp583 = $tmp581.value;
bool $tmp584 = $tmp582 == $tmp583;
frost$core$Bit $tmp585 = (frost$core$Bit) {$tmp584};
bool $tmp586 = $tmp585.value;
if ($tmp586) goto block76; else goto block77;
block76:;
org$frostlang$frostc$Type** $tmp587 = (org$frostlang$frostc$Type**) (param0->$data + 0);
org$frostlang$frostc$Type* $tmp588 = *$tmp587;
*(&local22) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp588));
org$frostlang$frostc$Type* $tmp589 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp589));
*(&local22) = $tmp588;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:549
org$frostlang$frostc$Type* $tmp590 = *(&local22);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from IR.frost:549:28
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn592 $tmp591 = ($fn592) ((frost$core$Object*) $tmp590)->$class->vtable[0];
frost$core$String* $tmp593 = $tmp591(((frost$core$Object*) $tmp590));
frost$core$String* $tmp594 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s595, $tmp593);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp594));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp594));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp593));
frost$core$String* $tmp596 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp594, &$s597);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp596));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp596));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp594));
org$frostlang$frostc$Type* $tmp598 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp598));
*(&local22) = ((org$frostlang$frostc$Type*) NULL);
return $tmp596;
block77:;
frost$core$Int $tmp599 = (frost$core$Int) {14u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IR.frost:551:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp600 = $tmp178.value;
int64_t $tmp601 = $tmp599.value;
bool $tmp602 = $tmp600 == $tmp601;
frost$core$Bit $tmp603 = (frost$core$Bit) {$tmp602};
bool $tmp604 = $tmp603.value;
if ($tmp604) goto block80; else goto block1;
block80:;
org$frostlang$frostc$Type** $tmp605 = (org$frostlang$frostc$Type**) (param0->$data + 0);
org$frostlang$frostc$Type* $tmp606 = *$tmp605;
*(&local23) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp606));
org$frostlang$frostc$Type* $tmp607 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp607));
*(&local23) = $tmp606;
org$frostlang$frostc$Type** $tmp608 = (org$frostlang$frostc$Type**) (param0->$data + 8);
org$frostlang$frostc$Type* $tmp609 = *$tmp608;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:552
org$frostlang$frostc$Type* $tmp610 = *(&local23);
$fn612 $tmp611 = ($fn612) ((frost$core$Object*) $tmp610)->$class->vtable[0];
frost$core$String* $tmp613 = $tmp611(((frost$core$Object*) $tmp610));
frost$core$String* $tmp614 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s615, $tmp613);
frost$core$String* $tmp616 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp614, &$s617);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp616));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp616));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp614));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp613));
org$frostlang$frostc$Type* $tmp618 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp618));
*(&local23) = ((org$frostlang$frostc$Type*) NULL);
return $tmp616;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:555
frost$core$Int $tmp619 = (frost$core$Int) {555u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s620, $tmp619);
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:429
frost$core$Int* $tmp621 = &param0->$rawValue;
frost$core$Int $tmp622 = *$tmp621;
frost$core$Int $tmp623 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IR.frost:429:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp624 = $tmp622.value;
int64_t $tmp625 = $tmp623.value;
bool $tmp626 = $tmp624 == $tmp625;
frost$core$Bit $tmp627 = (frost$core$Bit) {$tmp626};
bool $tmp628 = $tmp627.value;
if ($tmp628) goto block2; else goto block3;
block2:;
frost$core$Bit* $tmp629 = (frost$core$Bit*) (param0->$data + 0);
frost$core$Bit $tmp630 = *$tmp629;
*(&local0) = $tmp630;
org$frostlang$frostc$Type** $tmp631 = (org$frostlang$frostc$Type**) (param0->$data + 1);
org$frostlang$frostc$Type* $tmp632 = *$tmp631;
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp632));
org$frostlang$frostc$Type* $tmp633 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp633));
*(&local1) = $tmp632;
// <no location>
org$frostlang$frostc$Type* $tmp634 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp634));
org$frostlang$frostc$Type* $tmp635 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp635));
*(&local1) = ((org$frostlang$frostc$Type*) NULL);
goto block1;
block3:;
frost$core$Int $tmp636 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IR.frost:429:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp637 = $tmp622.value;
int64_t $tmp638 = $tmp636.value;
bool $tmp639 = $tmp637 == $tmp638;
frost$core$Bit $tmp640 = (frost$core$Bit) {$tmp639};
bool $tmp641 = $tmp640.value;
if ($tmp641) goto block5; else goto block6;
block5:;
frost$core$UInt64* $tmp642 = (frost$core$UInt64*) (param0->$data + 0);
frost$core$UInt64 $tmp643 = *$tmp642;
*(&local2) = $tmp643;
org$frostlang$frostc$Type** $tmp644 = (org$frostlang$frostc$Type**) (param0->$data + 8);
org$frostlang$frostc$Type* $tmp645 = *$tmp644;
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp645));
org$frostlang$frostc$Type* $tmp646 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp646));
*(&local3) = $tmp645;
// <no location>
org$frostlang$frostc$Type* $tmp647 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp647));
org$frostlang$frostc$Type* $tmp648 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp648));
*(&local3) = ((org$frostlang$frostc$Type*) NULL);
goto block1;
block6:;
frost$core$Int $tmp649 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IR.frost:429:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp650 = $tmp622.value;
int64_t $tmp651 = $tmp649.value;
bool $tmp652 = $tmp650 == $tmp651;
frost$core$Bit $tmp653 = (frost$core$Bit) {$tmp652};
bool $tmp654 = $tmp653.value;
if ($tmp654) goto block8; else goto block9;
block8:;
frost$core$Int* $tmp655 = (frost$core$Int*) (param0->$data + 0);
frost$core$Int $tmp656 = *$tmp655;
*(&local4) = $tmp656;
org$frostlang$frostc$Type** $tmp657 = (org$frostlang$frostc$Type**) (param0->$data + 8);
org$frostlang$frostc$Type* $tmp658 = *$tmp657;
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp658));
org$frostlang$frostc$Type* $tmp659 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp659));
*(&local5) = $tmp658;
// <no location>
org$frostlang$frostc$Type* $tmp660 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp660));
org$frostlang$frostc$Type* $tmp661 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp661));
*(&local5) = ((org$frostlang$frostc$Type*) NULL);
goto block1;
block9:;
frost$core$Int $tmp662 = (frost$core$Int) {3u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IR.frost:429:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp663 = $tmp622.value;
int64_t $tmp664 = $tmp662.value;
bool $tmp665 = $tmp663 == $tmp664;
frost$core$Bit $tmp666 = (frost$core$Bit) {$tmp665};
bool $tmp667 = $tmp666.value;
if ($tmp667) goto block11; else goto block12;
block11:;
org$frostlang$frostc$MethodDecl** $tmp668 = (org$frostlang$frostc$MethodDecl**) (param0->$data + 0);
org$frostlang$frostc$MethodDecl* $tmp669 = *$tmp668;
*(&local6) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp669));
org$frostlang$frostc$MethodDecl* $tmp670 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp670));
*(&local6) = $tmp669;
org$frostlang$frostc$Type** $tmp671 = (org$frostlang$frostc$Type**) (param0->$data + 8);
org$frostlang$frostc$Type* $tmp672 = *$tmp671;
*(&local7) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp672));
org$frostlang$frostc$Type* $tmp673 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp673));
*(&local7) = $tmp672;
// <no location>
org$frostlang$frostc$MethodDecl* $tmp674 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp674));
// <no location>
org$frostlang$frostc$Type* $tmp675 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp675));
org$frostlang$frostc$Type* $tmp676 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp676));
*(&local7) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$MethodDecl* $tmp677 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp677));
*(&local6) = ((org$frostlang$frostc$MethodDecl*) NULL);
goto block1;
block12:;
frost$core$Int $tmp678 = (frost$core$Int) {4u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IR.frost:429:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp679 = $tmp622.value;
int64_t $tmp680 = $tmp678.value;
bool $tmp681 = $tmp679 == $tmp680;
frost$core$Bit $tmp682 = (frost$core$Bit) {$tmp681};
bool $tmp683 = $tmp682.value;
if ($tmp683) goto block14; else goto block15;
block14:;
org$frostlang$frostc$Type** $tmp684 = (org$frostlang$frostc$Type**) (param0->$data + 0);
org$frostlang$frostc$Type* $tmp685 = *$tmp684;
*(&local8) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp685));
org$frostlang$frostc$Type* $tmp686 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp686));
*(&local8) = $tmp685;
// <no location>
org$frostlang$frostc$Type* $tmp687 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp687));
org$frostlang$frostc$Type* $tmp688 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp688));
*(&local8) = ((org$frostlang$frostc$Type*) NULL);
goto block1;
block15:;
frost$core$Int $tmp689 = (frost$core$Int) {5u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IR.frost:429:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp690 = $tmp622.value;
int64_t $tmp691 = $tmp689.value;
bool $tmp692 = $tmp690 == $tmp691;
frost$core$Bit $tmp693 = (frost$core$Bit) {$tmp692};
bool $tmp694 = $tmp693.value;
if ($tmp694) goto block17; else goto block18;
block17:;
frost$core$Int* $tmp695 = (frost$core$Int*) (param0->$data + 0);
frost$core$Int $tmp696 = *$tmp695;
*(&local9) = $tmp696;
org$frostlang$frostc$Type** $tmp697 = (org$frostlang$frostc$Type**) (param0->$data + 8);
org$frostlang$frostc$Type* $tmp698 = *$tmp697;
*(&local10) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp698));
org$frostlang$frostc$Type* $tmp699 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp699));
*(&local10) = $tmp698;
// <no location>
org$frostlang$frostc$Type* $tmp700 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp700));
org$frostlang$frostc$Type* $tmp701 = *(&local10);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp701));
*(&local10) = ((org$frostlang$frostc$Type*) NULL);
goto block1;
block18:;
frost$core$Int $tmp702 = (frost$core$Int) {6u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IR.frost:429:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp703 = $tmp622.value;
int64_t $tmp704 = $tmp702.value;
bool $tmp705 = $tmp703 == $tmp704;
frost$core$Bit $tmp706 = (frost$core$Bit) {$tmp705};
bool $tmp707 = $tmp706.value;
if ($tmp707) goto block20; else goto block21;
block20:;
frost$core$Real64* $tmp708 = (frost$core$Real64*) (param0->$data + 0);
frost$core$Real64 $tmp709 = *$tmp708;
*(&local11) = $tmp709;
org$frostlang$frostc$Type** $tmp710 = (org$frostlang$frostc$Type**) (param0->$data + 8);
org$frostlang$frostc$Type* $tmp711 = *$tmp710;
*(&local12) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp711));
org$frostlang$frostc$Type* $tmp712 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp712));
*(&local12) = $tmp711;
// <no location>
org$frostlang$frostc$Type* $tmp713 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp713));
org$frostlang$frostc$Type* $tmp714 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp714));
*(&local12) = ((org$frostlang$frostc$Type*) NULL);
goto block1;
block21:;
frost$core$Int $tmp715 = (frost$core$Int) {7u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IR.frost:429:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp716 = $tmp622.value;
int64_t $tmp717 = $tmp715.value;
bool $tmp718 = $tmp716 == $tmp717;
frost$core$Bit $tmp719 = (frost$core$Bit) {$tmp718};
bool $tmp720 = $tmp719.value;
if ($tmp720) goto block23; else goto block24;
block23:;
org$frostlang$frostc$IR$Statement$ID* $tmp721 = (org$frostlang$frostc$IR$Statement$ID*) (param0->$data + 0);
org$frostlang$frostc$IR$Statement$ID $tmp722 = *$tmp721;
*(&local13) = $tmp722;
org$frostlang$frostc$Type** $tmp723 = (org$frostlang$frostc$Type**) (param0->$data + 8);
org$frostlang$frostc$Type* $tmp724 = *$tmp723;
*(&local14) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp724));
org$frostlang$frostc$Type* $tmp725 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp725));
*(&local14) = $tmp724;
// <no location>
org$frostlang$frostc$Type* $tmp726 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp726));
org$frostlang$frostc$Type* $tmp727 = *(&local14);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp727));
*(&local14) = ((org$frostlang$frostc$Type*) NULL);
goto block1;
block24:;
frost$core$Int $tmp728 = (frost$core$Int) {8u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IR.frost:429:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp729 = $tmp622.value;
int64_t $tmp730 = $tmp728.value;
bool $tmp731 = $tmp729 == $tmp730;
frost$core$Bit $tmp732 = (frost$core$Bit) {$tmp731};
bool $tmp733 = $tmp732.value;
if ($tmp733) goto block26; else goto block27;
block26:;
frost$core$String** $tmp734 = (frost$core$String**) (param0->$data + 0);
frost$core$String* $tmp735 = *$tmp734;
*(&local15) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp735));
frost$core$String* $tmp736 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp736));
*(&local15) = $tmp735;
org$frostlang$frostc$Type** $tmp737 = (org$frostlang$frostc$Type**) (param0->$data + 8);
org$frostlang$frostc$Type* $tmp738 = *$tmp737;
*(&local16) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp738));
org$frostlang$frostc$Type* $tmp739 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp739));
*(&local16) = $tmp738;
// <no location>
frost$core$String* $tmp740 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp740));
// <no location>
org$frostlang$frostc$Type* $tmp741 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp741));
org$frostlang$frostc$Type* $tmp742 = *(&local16);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp742));
*(&local16) = ((org$frostlang$frostc$Type*) NULL);
frost$core$String* $tmp743 = *(&local15);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp743));
*(&local15) = ((frost$core$String*) NULL);
goto block1;
block27:;
frost$core$Int $tmp744 = (frost$core$Int) {9u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IR.frost:429:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp745 = $tmp622.value;
int64_t $tmp746 = $tmp744.value;
bool $tmp747 = $tmp745 == $tmp746;
frost$core$Bit $tmp748 = (frost$core$Bit) {$tmp747};
bool $tmp749 = $tmp748.value;
if ($tmp749) goto block29; else goto block30;
block29:;
org$frostlang$frostc$IR$Value** $tmp750 = (org$frostlang$frostc$IR$Value**) (param0->$data + 0);
org$frostlang$frostc$IR$Value* $tmp751 = *$tmp750;
*(&local17) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp751));
org$frostlang$frostc$IR$Value* $tmp752 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp752));
*(&local17) = $tmp751;
org$frostlang$frostc$MethodDecl** $tmp753 = (org$frostlang$frostc$MethodDecl**) (param0->$data + 8);
org$frostlang$frostc$MethodDecl* $tmp754 = *$tmp753;
*(&local18) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp754));
org$frostlang$frostc$MethodDecl* $tmp755 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp755));
*(&local18) = $tmp754;
org$frostlang$frostc$Type** $tmp756 = (org$frostlang$frostc$Type**) (param0->$data + 16);
org$frostlang$frostc$Type* $tmp757 = *$tmp756;
*(&local19) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp757));
org$frostlang$frostc$Type* $tmp758 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp758));
*(&local19) = $tmp757;
// <no location>
org$frostlang$frostc$IR$Value* $tmp759 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp759));
// <no location>
org$frostlang$frostc$MethodDecl* $tmp760 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp760));
// <no location>
org$frostlang$frostc$Type* $tmp761 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp761));
org$frostlang$frostc$Type* $tmp762 = *(&local19);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp762));
*(&local19) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$MethodDecl* $tmp763 = *(&local18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp763));
*(&local18) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$IR$Value* $tmp764 = *(&local17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp764));
*(&local17) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block30:;
frost$core$Int $tmp765 = (frost$core$Int) {10u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IR.frost:429:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp766 = $tmp622.value;
int64_t $tmp767 = $tmp765.value;
bool $tmp768 = $tmp766 == $tmp767;
frost$core$Bit $tmp769 = (frost$core$Bit) {$tmp768};
bool $tmp770 = $tmp769.value;
if ($tmp770) goto block32; else goto block33;
block32:;
org$frostlang$frostc$IR$Value** $tmp771 = (org$frostlang$frostc$IR$Value**) (param0->$data + 0);
org$frostlang$frostc$IR$Value* $tmp772 = *$tmp771;
*(&local20) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp772));
org$frostlang$frostc$IR$Value* $tmp773 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp773));
*(&local20) = $tmp772;
org$frostlang$frostc$FixedArray** $tmp774 = (org$frostlang$frostc$FixedArray**) (param0->$data + 8);
org$frostlang$frostc$FixedArray* $tmp775 = *$tmp774;
*(&local21) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp775));
org$frostlang$frostc$FixedArray* $tmp776 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp776));
*(&local21) = $tmp775;
org$frostlang$frostc$Type** $tmp777 = (org$frostlang$frostc$Type**) (param0->$data + 16);
org$frostlang$frostc$Type* $tmp778 = *$tmp777;
*(&local22) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp778));
org$frostlang$frostc$Type* $tmp779 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp779));
*(&local22) = $tmp778;
// <no location>
org$frostlang$frostc$IR$Value* $tmp780 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp780));
// <no location>
org$frostlang$frostc$FixedArray* $tmp781 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp781));
// <no location>
org$frostlang$frostc$Type* $tmp782 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp782));
org$frostlang$frostc$Type* $tmp783 = *(&local22);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp783));
*(&local22) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$FixedArray* $tmp784 = *(&local21);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp784));
*(&local21) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$IR$Value* $tmp785 = *(&local20);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp785));
*(&local20) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block33:;
frost$core$Int $tmp786 = (frost$core$Int) {11u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IR.frost:429:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp787 = $tmp622.value;
int64_t $tmp788 = $tmp786.value;
bool $tmp789 = $tmp787 == $tmp788;
frost$core$Bit $tmp790 = (frost$core$Bit) {$tmp789};
bool $tmp791 = $tmp790.value;
if ($tmp791) goto block35; else goto block36;
block35:;
org$frostlang$frostc$IR$Value** $tmp792 = (org$frostlang$frostc$IR$Value**) (param0->$data + 0);
org$frostlang$frostc$IR$Value* $tmp793 = *$tmp792;
*(&local23) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp793));
org$frostlang$frostc$IR$Value* $tmp794 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp794));
*(&local23) = $tmp793;
org$frostlang$frostc$MethodDecl** $tmp795 = (org$frostlang$frostc$MethodDecl**) (param0->$data + 8);
org$frostlang$frostc$MethodDecl* $tmp796 = *$tmp795;
*(&local24) = ((org$frostlang$frostc$MethodDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp796));
org$frostlang$frostc$MethodDecl* $tmp797 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp797));
*(&local24) = $tmp796;
org$frostlang$frostc$FixedArray** $tmp798 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
org$frostlang$frostc$FixedArray* $tmp799 = *$tmp798;
*(&local25) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp799));
org$frostlang$frostc$FixedArray* $tmp800 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp800));
*(&local25) = $tmp799;
// <no location>
org$frostlang$frostc$IR$Value* $tmp801 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp801));
// <no location>
org$frostlang$frostc$MethodDecl* $tmp802 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp802));
// <no location>
org$frostlang$frostc$FixedArray* $tmp803 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp803));
org$frostlang$frostc$FixedArray* $tmp804 = *(&local25);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp804));
*(&local25) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$MethodDecl* $tmp805 = *(&local24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp805));
*(&local24) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$IR$Value* $tmp806 = *(&local23);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp806));
*(&local23) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block36:;
frost$core$Int $tmp807 = (frost$core$Int) {12u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IR.frost:429:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp808 = $tmp622.value;
int64_t $tmp809 = $tmp807.value;
bool $tmp810 = $tmp808 == $tmp809;
frost$core$Bit $tmp811 = (frost$core$Bit) {$tmp810};
bool $tmp812 = $tmp811.value;
if ($tmp812) goto block38; else goto block39;
block38:;
org$frostlang$frostc$IR$Value** $tmp813 = (org$frostlang$frostc$IR$Value**) (param0->$data + 0);
org$frostlang$frostc$IR$Value* $tmp814 = *$tmp813;
*(&local26) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp814));
org$frostlang$frostc$IR$Value* $tmp815 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp815));
*(&local26) = $tmp814;
org$frostlang$frostc$FixedArray** $tmp816 = (org$frostlang$frostc$FixedArray**) (param0->$data + 8);
org$frostlang$frostc$FixedArray* $tmp817 = *$tmp816;
*(&local27) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp817));
org$frostlang$frostc$FixedArray* $tmp818 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp818));
*(&local27) = $tmp817;
org$frostlang$frostc$FixedArray** $tmp819 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
org$frostlang$frostc$FixedArray* $tmp820 = *$tmp819;
*(&local28) = ((org$frostlang$frostc$FixedArray*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp820));
org$frostlang$frostc$FixedArray* $tmp821 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp821));
*(&local28) = $tmp820;
// <no location>
org$frostlang$frostc$IR$Value* $tmp822 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp822));
// <no location>
org$frostlang$frostc$FixedArray* $tmp823 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp823));
// <no location>
org$frostlang$frostc$FixedArray* $tmp824 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp824));
org$frostlang$frostc$FixedArray* $tmp825 = *(&local28);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp825));
*(&local28) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$FixedArray* $tmp826 = *(&local27);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp826));
*(&local27) = ((org$frostlang$frostc$FixedArray*) NULL);
org$frostlang$frostc$IR$Value* $tmp827 = *(&local26);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp827));
*(&local26) = ((org$frostlang$frostc$IR$Value*) NULL);
goto block1;
block39:;
frost$core$Int $tmp828 = (frost$core$Int) {13u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IR.frost:429:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp829 = $tmp622.value;
int64_t $tmp830 = $tmp828.value;
bool $tmp831 = $tmp829 == $tmp830;
frost$core$Bit $tmp832 = (frost$core$Bit) {$tmp831};
bool $tmp833 = $tmp832.value;
if ($tmp833) goto block41; else goto block42;
block41:;
org$frostlang$frostc$Type** $tmp834 = (org$frostlang$frostc$Type**) (param0->$data + 0);
org$frostlang$frostc$Type* $tmp835 = *$tmp834;
*(&local29) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp835));
org$frostlang$frostc$Type* $tmp836 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp836));
*(&local29) = $tmp835;
// <no location>
org$frostlang$frostc$Type* $tmp837 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp837));
org$frostlang$frostc$Type* $tmp838 = *(&local29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp838));
*(&local29) = ((org$frostlang$frostc$Type*) NULL);
goto block1;
block42:;
frost$core$Int $tmp839 = (frost$core$Int) {14u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from IR.frost:429:5
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp840 = $tmp622.value;
int64_t $tmp841 = $tmp839.value;
bool $tmp842 = $tmp840 == $tmp841;
frost$core$Bit $tmp843 = (frost$core$Bit) {$tmp842};
bool $tmp844 = $tmp843.value;
if ($tmp844) goto block44; else goto block1;
block44:;
org$frostlang$frostc$Type** $tmp845 = (org$frostlang$frostc$Type**) (param0->$data + 0);
org$frostlang$frostc$Type* $tmp846 = *$tmp845;
*(&local30) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp846));
org$frostlang$frostc$Type* $tmp847 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp847));
*(&local30) = $tmp846;
org$frostlang$frostc$Type** $tmp848 = (org$frostlang$frostc$Type**) (param0->$data + 8);
org$frostlang$frostc$Type* $tmp849 = *$tmp848;
*(&local31) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp849));
org$frostlang$frostc$Type* $tmp850 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp850));
*(&local31) = $tmp849;
// <no location>
org$frostlang$frostc$Type* $tmp851 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp851));
// <no location>
org$frostlang$frostc$Type* $tmp852 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp852));
org$frostlang$frostc$Type* $tmp853 = *(&local31);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp853));
*(&local31) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$Type* $tmp854 = *(&local30);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp854));
*(&local30) = ((org$frostlang$frostc$Type*) NULL);
goto block1;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:429
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}
void org$frostlang$frostc$IR$Value$init$frost$core$Int$frost$core$Bit$org$frostlang$frostc$Type(org$frostlang$frostc$IR$Value* param0, frost$core$Int param1, frost$core$Bit param2, org$frostlang$frostc$Type* param3) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:429
frost$core$Int* $tmp855 = &param0->$rawValue;
*$tmp855 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:429
frost$core$Bit* $tmp856 = (frost$core$Bit*) (param0->$data + 0);
*$tmp856 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:429
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$Type** $tmp857 = (org$frostlang$frostc$Type**) (param0->$data + 1);
*$tmp857 = param3;
return;

}
void org$frostlang$frostc$IR$Value$init$frost$core$Int$frost$core$UInt64$org$frostlang$frostc$Type(org$frostlang$frostc$IR$Value* param0, frost$core$Int param1, frost$core$UInt64 param2, org$frostlang$frostc$Type* param3) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:429
frost$core$Int* $tmp858 = &param0->$rawValue;
*$tmp858 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:429
frost$core$UInt64* $tmp859 = (frost$core$UInt64*) (param0->$data + 0);
*$tmp859 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:429
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$Type** $tmp860 = (org$frostlang$frostc$Type**) (param0->$data + 8);
*$tmp860 = param3;
return;

}
void org$frostlang$frostc$IR$Value$init$frost$core$Int$frost$core$Int$org$frostlang$frostc$Type(org$frostlang$frostc$IR$Value* param0, frost$core$Int param1, frost$core$Int param2, org$frostlang$frostc$Type* param3) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:429
frost$core$Int* $tmp861 = &param0->$rawValue;
*$tmp861 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:429
frost$core$Int* $tmp862 = (frost$core$Int*) (param0->$data + 0);
*$tmp862 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:429
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$Type** $tmp863 = (org$frostlang$frostc$Type**) (param0->$data + 8);
*$tmp863 = param3;
return;

}
void org$frostlang$frostc$IR$Value$init$frost$core$Int$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$Type(org$frostlang$frostc$IR$Value* param0, frost$core$Int param1, org$frostlang$frostc$MethodDecl* param2, org$frostlang$frostc$Type* param3) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:429
frost$core$Int* $tmp864 = &param0->$rawValue;
*$tmp864 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:429
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
org$frostlang$frostc$MethodDecl** $tmp865 = (org$frostlang$frostc$MethodDecl**) (param0->$data + 0);
*$tmp865 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:429
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$Type** $tmp866 = (org$frostlang$frostc$Type**) (param0->$data + 8);
*$tmp866 = param3;
return;

}
void org$frostlang$frostc$IR$Value$init$frost$core$Int$org$frostlang$frostc$Type(org$frostlang$frostc$IR$Value* param0, frost$core$Int param1, org$frostlang$frostc$Type* param2) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:429
frost$core$Int* $tmp867 = &param0->$rawValue;
*$tmp867 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:429
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
org$frostlang$frostc$Type** $tmp868 = (org$frostlang$frostc$Type**) (param0->$data + 0);
*$tmp868 = param2;
return;

}
void org$frostlang$frostc$IR$Value$init$frost$core$Int$frost$core$Real64$org$frostlang$frostc$Type(org$frostlang$frostc$IR$Value* param0, frost$core$Int param1, frost$core$Real64 param2, org$frostlang$frostc$Type* param3) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:429
frost$core$Int* $tmp869 = &param0->$rawValue;
*$tmp869 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:429
frost$core$Real64* $tmp870 = (frost$core$Real64*) (param0->$data + 0);
*$tmp870 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:429
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$Type** $tmp871 = (org$frostlang$frostc$Type**) (param0->$data + 8);
*$tmp871 = param3;
return;

}
void org$frostlang$frostc$IR$Value$init$frost$core$Int$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type(org$frostlang$frostc$IR$Value* param0, frost$core$Int param1, org$frostlang$frostc$IR$Statement$ID param2, org$frostlang$frostc$Type* param3) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:429
frost$core$Int* $tmp872 = &param0->$rawValue;
*$tmp872 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:429
org$frostlang$frostc$IR$Statement$ID* $tmp873 = (org$frostlang$frostc$IR$Statement$ID*) (param0->$data + 0);
*$tmp873 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:429
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$Type** $tmp874 = (org$frostlang$frostc$Type**) (param0->$data + 8);
*$tmp874 = param3;
return;

}
void org$frostlang$frostc$IR$Value$init$frost$core$Int$frost$core$String$org$frostlang$frostc$Type(org$frostlang$frostc$IR$Value* param0, frost$core$Int param1, frost$core$String* param2, org$frostlang$frostc$Type* param3) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:429
frost$core$Int* $tmp875 = &param0->$rawValue;
*$tmp875 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:429
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
frost$core$String** $tmp876 = (frost$core$String**) (param0->$data + 0);
*$tmp876 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:429
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$Type** $tmp877 = (org$frostlang$frostc$Type**) (param0->$data + 8);
*$tmp877 = param3;
return;

}
void org$frostlang$frostc$IR$Value$init$frost$core$Int$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$Type(org$frostlang$frostc$IR$Value* param0, frost$core$Int param1, org$frostlang$frostc$IR$Value* param2, org$frostlang$frostc$MethodDecl* param3, org$frostlang$frostc$Type* param4) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:429
frost$core$Int* $tmp878 = &param0->$rawValue;
*$tmp878 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:429
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
org$frostlang$frostc$IR$Value** $tmp879 = (org$frostlang$frostc$IR$Value**) (param0->$data + 0);
*$tmp879 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:429
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$MethodDecl** $tmp880 = (org$frostlang$frostc$MethodDecl**) (param0->$data + 8);
*$tmp880 = param3;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:429
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$Type** $tmp881 = (org$frostlang$frostc$Type**) (param0->$data + 16);
*$tmp881 = param4;
return;

}
void org$frostlang$frostc$IR$Value$init$frost$core$Int$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$MethodDecl$GT$org$frostlang$frostc$Type(org$frostlang$frostc$IR$Value* param0, frost$core$Int param1, org$frostlang$frostc$IR$Value* param2, org$frostlang$frostc$FixedArray* param3, org$frostlang$frostc$Type* param4) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:429
frost$core$Int* $tmp882 = &param0->$rawValue;
*$tmp882 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:429
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
org$frostlang$frostc$IR$Value** $tmp883 = (org$frostlang$frostc$IR$Value**) (param0->$data + 0);
*$tmp883 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:429
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$FixedArray** $tmp884 = (org$frostlang$frostc$FixedArray**) (param0->$data + 8);
*$tmp884 = param3;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:429
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$Type** $tmp885 = (org$frostlang$frostc$Type**) (param0->$data + 16);
*$tmp885 = param4;
return;

}
void org$frostlang$frostc$IR$Value$init$frost$core$Int$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT(org$frostlang$frostc$IR$Value* param0, frost$core$Int param1, org$frostlang$frostc$IR$Value* param2, org$frostlang$frostc$MethodDecl* param3, org$frostlang$frostc$FixedArray* param4) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:429
frost$core$Int* $tmp886 = &param0->$rawValue;
*$tmp886 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:429
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
org$frostlang$frostc$IR$Value** $tmp887 = (org$frostlang$frostc$IR$Value**) (param0->$data + 0);
*$tmp887 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:429
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$MethodDecl** $tmp888 = (org$frostlang$frostc$MethodDecl**) (param0->$data + 8);
*$tmp888 = param3;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:429
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$FixedArray** $tmp889 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
*$tmp889 = param4;
return;

}
void org$frostlang$frostc$IR$Value$init$frost$core$Int$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$MethodDecl$GT$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Type$GT(org$frostlang$frostc$IR$Value* param0, frost$core$Int param1, org$frostlang$frostc$IR$Value* param2, org$frostlang$frostc$FixedArray* param3, org$frostlang$frostc$FixedArray* param4) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:429
frost$core$Int* $tmp890 = &param0->$rawValue;
*$tmp890 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:429
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
org$frostlang$frostc$IR$Value** $tmp891 = (org$frostlang$frostc$IR$Value**) (param0->$data + 0);
*$tmp891 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:429
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$FixedArray** $tmp892 = (org$frostlang$frostc$FixedArray**) (param0->$data + 8);
*$tmp892 = param3;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:429
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param4));
org$frostlang$frostc$FixedArray** $tmp893 = (org$frostlang$frostc$FixedArray**) (param0->$data + 16);
*$tmp893 = param4;
return;

}
void org$frostlang$frostc$IR$Value$init$frost$core$Int$org$frostlang$frostc$Type$org$frostlang$frostc$Type(org$frostlang$frostc$IR$Value* param0, frost$core$Int param1, org$frostlang$frostc$Type* param2, org$frostlang$frostc$Type* param3) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:429
frost$core$Int* $tmp894 = &param0->$rawValue;
*$tmp894 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:429
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
org$frostlang$frostc$Type** $tmp895 = (org$frostlang$frostc$Type**) (param0->$data + 0);
*$tmp895 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/IR.frost:429
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
org$frostlang$frostc$Type** $tmp896 = (org$frostlang$frostc$Type**) (param0->$data + 8);
*$tmp896 = param3;
return;

}






