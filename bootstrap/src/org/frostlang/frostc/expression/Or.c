#include "org/frostlang/frostc/expression/Or.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/IR/Value.h"
#include "org/frostlang/frostc/Compiler.h"
#include "org/frostlang/frostc/Position.h"
#include "org/frostlang/frostc/ASTNode.h"
#include "org/frostlang/frostc/Compiler/TypeContext.h"
#include "org/frostlang/frostc/IR.h"
#include "org/frostlang/frostc/Type/Kind.h"
#include "org/frostlang/frostc/IR/Block/ID.h"
#include "org/frostlang/frostc/Compiler/AutoUnrefs.h"
#include "org/frostlang/frostc/IR/Statement/ID.h"
#include "frost/core/Frost.h"
#include "frost/core/Int64.h"
#include "frost/collections/Array.h"
#include "frost/collections/CollectionView.h"
#include "org/frostlang/frostc/Type.h"
#include "frost/core/Bit.h"
#include "org/frostlang/frostc/IR/Statement.h"


static frost$core$String $s1;
org$frostlang$frostc$expression$Or$class_type org$frostlang$frostc$expression$Or$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$expression$Or$cleanup} };

typedef frost$core$Int64 (*$fn12)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn55)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn60)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn65)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn76)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn81)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn88)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn95)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn100)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn131)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn138)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn143)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn149)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn169)(org$frostlang$frostc$IR*, frost$core$String*);
typedef void (*$fn177)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2e\x4f\x72", 34, 2929099002013185031, NULL };
static frost$core$String $s21 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74", 14, 3252805458447869119, NULL };
static frost$core$String $s33 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74", 14, 3252805458447869119, NULL };
static frost$core$String $s43 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74", 14, 3252805458447869119, NULL };
static frost$core$String $s57 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x20\x74\x72\x75\x65", 7, 226243874007106, NULL };
static frost$core$String $s62 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x20\x66\x61\x6c\x73\x65", 8, 22850629800266681, NULL };
static frost$core$String $s67 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x20\x6d\x65\x72\x67\x65", 8, 22850630532870686, NULL };
static frost$core$String $s112 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74", 14, 3252805458447869119, NULL };
static frost$core$String $s161 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74", 14, 3252805458447869119, NULL };
static frost$core$String $s171 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x20\x6c\x65\x66\x74\x20\x66\x61\x6c\x73\x65", 13, 23225664675033844, NULL };

org$frostlang$frostc$IR$Value* org$frostlang$frostc$expression$Or$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, org$frostlang$frostc$ASTNode* param2, org$frostlang$frostc$ASTNode* param3, org$frostlang$frostc$Compiler$TypeContext* param4) {

org$frostlang$frostc$IR* local0 = NULL;
org$frostlang$frostc$Type$Kind local1;
org$frostlang$frostc$Type$Kind local2;
org$frostlang$frostc$IR$Value* local3 = NULL;
org$frostlang$frostc$Type$Kind local4;
org$frostlang$frostc$Type$Kind local5;
org$frostlang$frostc$IR$Value* local6 = NULL;
org$frostlang$frostc$Type$Kind local7;
org$frostlang$frostc$Type$Kind local8;
org$frostlang$frostc$IR$Block$ID local9;
org$frostlang$frostc$IR$Block$ID local10;
org$frostlang$frostc$IR$Block$ID local11;
org$frostlang$frostc$IR$Value* local12 = NULL;
org$frostlang$frostc$Compiler$AutoUnrefs* local13 = NULL;
org$frostlang$frostc$Type$Kind local14;
org$frostlang$frostc$Type$Kind local15;
org$frostlang$frostc$IR$Statement$ID local16;
org$frostlang$frostc$Type$Kind local17;
org$frostlang$frostc$Type$Kind local18;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Or.frost:15
org$frostlang$frostc$IR** $tmp2 = &param0->ir;
org$frostlang$frostc$IR* $tmp3 = *$tmp2;
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3));
org$frostlang$frostc$IR* $tmp4 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4));
*(&local0) = $tmp3;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Or.frost:17
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp5 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp6 = (frost$core$Int64) {2};
org$frostlang$frostc$IR* $tmp7 = *(&local0);
frost$collections$Array** $tmp8 = &$tmp7->locals;
frost$collections$Array* $tmp9 = *$tmp8;
ITable* $tmp10 = ((frost$collections$CollectionView*) $tmp9)->$class->itable;
while ($tmp10->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp10 = $tmp10->next;
}
$fn12 $tmp11 = $tmp10->methods[0];
frost$core$Int64 $tmp13 = $tmp11(((frost$collections$CollectionView*) $tmp9));
// begin inline call to method org.frostlang.frostc.Type.Bit():org.frostlang.frostc.Type from Or.frost:17:63
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:425
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp14 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp15 = (frost$core$Int64) {0};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:425:43
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp16 = &(&local2)->$rawValue;
*$tmp16 = $tmp15;
org$frostlang$frostc$Type$Kind $tmp17 = *(&local2);
*(&local1) = $tmp17;
org$frostlang$frostc$Type$Kind $tmp18 = *(&local1);
org$frostlang$frostc$Position $tmp19 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp20 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp14, &$s21, $tmp18, $tmp19, $tmp20);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp14));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp14));
org$frostlang$frostc$IR$Value$init$frost$core$Int64$frost$core$Int64$org$frostlang$frostc$Type($tmp5, $tmp6, $tmp13, $tmp14);
*(&local3) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5));
org$frostlang$frostc$IR$Value* $tmp22 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp22));
*(&local3) = $tmp5;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp14));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Or.frost:18
org$frostlang$frostc$IR* $tmp23 = *(&local0);
frost$collections$Array** $tmp24 = &$tmp23->locals;
frost$collections$Array* $tmp25 = *$tmp24;
// begin inline call to method org.frostlang.frostc.Type.Bit():org.frostlang.frostc.Type from Or.frost:18:31
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:425
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp26 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp27 = (frost$core$Int64) {0};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:425:43
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp28 = &(&local5)->$rawValue;
*$tmp28 = $tmp27;
org$frostlang$frostc$Type$Kind $tmp29 = *(&local5);
*(&local4) = $tmp29;
org$frostlang$frostc$Type$Kind $tmp30 = *(&local4);
org$frostlang$frostc$Position $tmp31 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp32 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp26, &$s33, $tmp30, $tmp31, $tmp32);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp26));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp26));
frost$collections$Array$add$frost$collections$Array$T($tmp25, ((frost$core$Object*) $tmp26));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp26));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Or.frost:19
*(&local6) = ((org$frostlang$frostc$IR$Value*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Or.frost:20
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp34 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp35 = (frost$core$Int64) {3};
// begin inline call to method org.frostlang.frostc.Type.Bit():org.frostlang.frostc.Type from Or.frost:20:83
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:425
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp36 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp37 = (frost$core$Int64) {0};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:425:43
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp38 = &(&local8)->$rawValue;
*$tmp38 = $tmp37;
org$frostlang$frostc$Type$Kind $tmp39 = *(&local8);
*(&local7) = $tmp39;
org$frostlang$frostc$Type$Kind $tmp40 = *(&local7);
org$frostlang$frostc$Position $tmp41 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp42 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp36, &$s43, $tmp40, $tmp41, $tmp42);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp36));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp36));
frost$core$Bit $tmp44 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp34, $tmp35, $tmp36, $tmp44);
org$frostlang$frostc$IR$Value* $tmp45 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param2, $tmp34);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp45));
org$frostlang$frostc$IR$Value* $tmp46 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp46));
*(&local6) = $tmp45;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp45));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp36));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp34));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Or.frost:21
org$frostlang$frostc$IR$Value* $tmp47 = *(&local6);
frost$core$Bit $tmp48 = frost$core$Bit$init$builtin_bit($tmp47 == NULL);
bool $tmp49 = $tmp48.value;
if ($tmp49) goto block7; else goto block8;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Or.frost:22
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$IR$Value* $tmp50 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp50));
*(&local6) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp51 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp51));
*(&local3) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp52 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp52));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Or.frost:24
org$frostlang$frostc$IR* $tmp53 = *(&local0);
$fn55 $tmp54 = ($fn55) $tmp53->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp56 = $tmp54($tmp53, &$s57);
*(&local9) = $tmp56;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Or.frost:25
org$frostlang$frostc$IR* $tmp58 = *(&local0);
$fn60 $tmp59 = ($fn60) $tmp58->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp61 = $tmp59($tmp58, &$s62);
*(&local10) = $tmp61;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Or.frost:26
org$frostlang$frostc$IR* $tmp63 = *(&local0);
$fn65 $tmp64 = ($fn65) $tmp63->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp66 = $tmp64($tmp63, &$s67);
*(&local11) = $tmp66;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Or.frost:27
org$frostlang$frostc$IR* $tmp68 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp69 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp70 = (frost$core$Int64) {5};
org$frostlang$frostc$IR$Value* $tmp71 = *(&local6);
org$frostlang$frostc$IR$Value* $tmp72 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp71);
org$frostlang$frostc$IR$Block$ID $tmp73 = *(&local9);
org$frostlang$frostc$IR$Block$ID $tmp74 = *(&local10);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp69, $tmp70, param1, $tmp72, $tmp73, $tmp74);
$fn76 $tmp75 = ($fn76) $tmp68->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp77 = $tmp75($tmp68, $tmp69);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp72));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp69));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Or.frost:29
org$frostlang$frostc$IR* $tmp78 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp79 = *(&local9);
$fn81 $tmp80 = ($fn81) $tmp78->$class->vtable[4];
$tmp80($tmp78, $tmp79);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Or.frost:30
org$frostlang$frostc$IR* $tmp82 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp83 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp84 = (frost$core$Int64) {27};
org$frostlang$frostc$IR$Value* $tmp85 = *(&local6);
org$frostlang$frostc$IR$Value* $tmp86 = *(&local3);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value($tmp83, $tmp84, param1, $tmp85, $tmp86);
$fn88 $tmp87 = ($fn88) $tmp82->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp89 = $tmp87($tmp82, $tmp83);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp83));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Or.frost:31
org$frostlang$frostc$IR* $tmp90 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp91 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp92 = (frost$core$Int64) {1};
org$frostlang$frostc$IR$Block$ID $tmp93 = *(&local11);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Block$ID($tmp91, $tmp92, param1, $tmp93);
$fn95 $tmp94 = ($fn95) $tmp90->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp96 = $tmp94($tmp90, $tmp91);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp91));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Or.frost:32
org$frostlang$frostc$IR* $tmp97 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp98 = *(&local10);
$fn100 $tmp99 = ($fn100) $tmp97->$class->vtable[4];
$tmp99($tmp97, $tmp98);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Or.frost:33
*(&local12) = ((org$frostlang$frostc$IR$Value*) NULL);
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Or.frost:35
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Compiler$AutoUnrefs));
org$frostlang$frostc$Compiler$AutoUnrefs* $tmp101 = (org$frostlang$frostc$Compiler$AutoUnrefs*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoUnrefs$class);
org$frostlang$frostc$Compiler$AutoUnrefs$init$org$frostlang$frostc$Compiler($tmp101, param0);
*(&local13) = ((org$frostlang$frostc$Compiler$AutoUnrefs*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp101));
org$frostlang$frostc$Compiler$AutoUnrefs* $tmp102 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp102));
*(&local13) = $tmp101;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp101));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Or.frost:36
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp103 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp104 = (frost$core$Int64) {3};
// begin inline call to method org.frostlang.frostc.Type.Bit():org.frostlang.frostc.Type from Or.frost:36:89
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:425
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp105 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp106 = (frost$core$Int64) {0};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:425:43
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp107 = &(&local15)->$rawValue;
*$tmp107 = $tmp106;
org$frostlang$frostc$Type$Kind $tmp108 = *(&local15);
*(&local14) = $tmp108;
org$frostlang$frostc$Type$Kind $tmp109 = *(&local14);
org$frostlang$frostc$Position $tmp110 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp111 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp105, &$s112, $tmp109, $tmp110, $tmp111);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp105));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp105));
frost$core$Bit $tmp113 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp103, $tmp104, $tmp105, $tmp113);
org$frostlang$frostc$IR$Value* $tmp114 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param3, $tmp103);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp114));
org$frostlang$frostc$IR$Value* $tmp115 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp115));
*(&local12) = $tmp114;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp114));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp105));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp103));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Or.frost:37
org$frostlang$frostc$IR$Value* $tmp116 = *(&local12);
frost$core$Bit $tmp117 = frost$core$Bit$init$builtin_bit($tmp116 == NULL);
bool $tmp118 = $tmp117.value;
if ($tmp118) goto block11; else goto block12;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Or.frost:38
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$Compiler$AutoUnrefs* $tmp119 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp119));
*(&local13) = ((org$frostlang$frostc$Compiler$AutoUnrefs*) NULL);
org$frostlang$frostc$IR$Value* $tmp120 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp120));
*(&local12) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp121 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp121));
*(&local6) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp122 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp122));
*(&local3) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp123 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp123));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block12:;
org$frostlang$frostc$Compiler$AutoUnrefs* $tmp124 = *(&local13);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp124));
*(&local13) = ((org$frostlang$frostc$Compiler$AutoUnrefs*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Or.frost:41
org$frostlang$frostc$IR* $tmp125 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp126 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp127 = (frost$core$Int64) {27};
org$frostlang$frostc$IR$Value* $tmp128 = *(&local12);
org$frostlang$frostc$IR$Value* $tmp129 = *(&local3);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value($tmp126, $tmp127, param1, $tmp128, $tmp129);
$fn131 $tmp130 = ($fn131) $tmp125->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp132 = $tmp130($tmp125, $tmp126);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp126));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Or.frost:42
org$frostlang$frostc$IR* $tmp133 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp134 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp135 = (frost$core$Int64) {1};
org$frostlang$frostc$IR$Block$ID $tmp136 = *(&local11);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Block$ID($tmp134, $tmp135, param1, $tmp136);
$fn138 $tmp137 = ($fn138) $tmp133->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp139 = $tmp137($tmp133, $tmp134);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp134));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Or.frost:43
org$frostlang$frostc$IR* $tmp140 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp141 = *(&local11);
$fn143 $tmp142 = ($fn143) $tmp140->$class->vtable[4];
$tmp142($tmp140, $tmp141);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Or.frost:44
org$frostlang$frostc$IR* $tmp144 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp145 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp146 = (frost$core$Int64) {14};
org$frostlang$frostc$IR$Value* $tmp147 = *(&local3);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp145, $tmp146, param1, $tmp147);
$fn149 $tmp148 = ($fn149) $tmp144->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp150 = $tmp148($tmp144, $tmp145);
*(&local16) = $tmp150;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp145));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Or.frost:45
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$IR$Value));
org$frostlang$frostc$IR$Value* $tmp151 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp152 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp153 = *(&local16);
// begin inline call to method org.frostlang.frostc.Type.Bit():org.frostlang.frostc.Type from Or.frost:45:43
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:425
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$Type));
org$frostlang$frostc$Type* $tmp154 = (org$frostlang$frostc$Type*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$Type$class);
frost$core$Int64 $tmp155 = (frost$core$Int64) {0};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int64):org.frostlang.frostc.Type.Kind from Type.frost:425:43
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
frost$core$Int64* $tmp156 = &(&local18)->$rawValue;
*$tmp156 = $tmp155;
org$frostlang$frostc$Type$Kind $tmp157 = *(&local18);
*(&local17) = $tmp157;
org$frostlang$frostc$Type$Kind $tmp158 = *(&local17);
org$frostlang$frostc$Position $tmp159 = org$frostlang$frostc$Position$init();
frost$core$Bit $tmp160 = frost$core$Bit$init$builtin_bit(true);
org$frostlang$frostc$Type$init$frost$core$String$org$frostlang$frostc$Type$Kind$org$frostlang$frostc$Position$frost$core$Bit($tmp154, &$s161, $tmp158, $tmp159, $tmp160);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp154));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp154));
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp151, $tmp152, $tmp153, $tmp154);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp151));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp154));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp151));
org$frostlang$frostc$IR$Value* $tmp162 = *(&local12);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp162));
*(&local12) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp163 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp163));
*(&local6) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp164 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp164));
*(&local3) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp165 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp165));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return $tmp151;

}
void org$frostlang$frostc$expression$Or$compileConditionalBranch$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$ASTNode$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, org$frostlang$frostc$ASTNode* param2, org$frostlang$frostc$ASTNode* param3, org$frostlang$frostc$IR$Block$ID param4, org$frostlang$frostc$IR$Block$ID param5) {

org$frostlang$frostc$IR$Block$ID local0;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Or.frost:51
org$frostlang$frostc$IR** $tmp166 = &param0->ir;
org$frostlang$frostc$IR* $tmp167 = *$tmp166;
$fn169 $tmp168 = ($fn169) $tmp167->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp170 = $tmp168($tmp167, &$s171);
*(&local0) = $tmp170;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Or.frost:52
org$frostlang$frostc$IR$Block$ID $tmp172 = *(&local0);
org$frostlang$frostc$Compiler$compileConditionalBranch$org$frostlang$frostc$ASTNode$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID(param0, param2, param4, $tmp172);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Or.frost:53
org$frostlang$frostc$IR** $tmp173 = &param0->ir;
org$frostlang$frostc$IR* $tmp174 = *$tmp173;
org$frostlang$frostc$IR$Block$ID $tmp175 = *(&local0);
$fn177 $tmp176 = ($fn177) $tmp174->$class->vtable[4];
$tmp176($tmp174, $tmp175);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Or.frost:54
org$frostlang$frostc$Compiler$compileConditionalBranch$org$frostlang$frostc$ASTNode$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID(param0, param3, param4, param5);
return;

}
void org$frostlang$frostc$expression$Or$init(org$frostlang$frostc$expression$Or* param0) {

return;

}
void org$frostlang$frostc$expression$Or$cleanup(org$frostlang$frostc$expression$Or* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Or.frost:11
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}






