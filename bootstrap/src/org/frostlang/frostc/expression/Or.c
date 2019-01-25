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
org$frostlang$frostc$expression$Or$class_type org$frostlang$frostc$expression$Or$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$expression$Or$cleanup} };

typedef frost$core$Int64 (*$fn12)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn34)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn39)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn44)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn55)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn60)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn67)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn74)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn79)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn103)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn110)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn115)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn121)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn134)(org$frostlang$frostc$IR*, frost$core$String*);
typedef void (*$fn142)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2e\x4f\x72", 34, 2929099002013185031, NULL };
static frost$core$String $s36 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x20\x74\x72\x75\x65", 7, 226243874007106, NULL };
static frost$core$String $s41 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x20\x66\x61\x6c\x73\x65", 8, 22850629800266681, NULL };
static frost$core$String $s46 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x20\x6d\x65\x72\x67\x65", 8, 22850630532870686, NULL };
static frost$core$String $s136 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x20\x6c\x65\x66\x74\x20\x66\x61\x6c\x73\x65", 13, 23225664675033844, NULL };

org$frostlang$frostc$IR$Value* org$frostlang$frostc$expression$Or$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, org$frostlang$frostc$ASTNode* param2, org$frostlang$frostc$ASTNode* param3, org$frostlang$frostc$Compiler$TypeContext* param4) {

org$frostlang$frostc$IR* local0 = NULL;
org$frostlang$frostc$IR$Value* local1 = NULL;
org$frostlang$frostc$IR$Value* local2 = NULL;
org$frostlang$frostc$IR$Block$ID local3;
org$frostlang$frostc$IR$Block$ID local4;
org$frostlang$frostc$IR$Block$ID local5;
org$frostlang$frostc$IR$Value* local6 = NULL;
org$frostlang$frostc$Compiler$AutoUnrefs* local7 = NULL;
org$frostlang$frostc$IR$Statement$ID local8;
// line 15
org$frostlang$frostc$IR** $tmp2 = &param0->ir;
org$frostlang$frostc$IR* $tmp3 = *$tmp2;
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3));
org$frostlang$frostc$IR* $tmp4 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4));
*(&local0) = $tmp3;
// line 17
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
org$frostlang$frostc$Type* $tmp14 = org$frostlang$frostc$Type$Bit$R$org$frostlang$frostc$Type();
org$frostlang$frostc$IR$Value$init$frost$core$Int64$frost$core$Int64$org$frostlang$frostc$Type($tmp5, $tmp6, $tmp13, $tmp14);
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp5));
org$frostlang$frostc$IR$Value* $tmp15 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp15));
*(&local1) = $tmp5;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp14));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5));
// line 18
org$frostlang$frostc$IR* $tmp16 = *(&local0);
frost$collections$Array** $tmp17 = &$tmp16->locals;
frost$collections$Array* $tmp18 = *$tmp17;
org$frostlang$frostc$Type* $tmp19 = org$frostlang$frostc$Type$Bit$R$org$frostlang$frostc$Type();
frost$collections$Array$add$frost$collections$Array$T($tmp18, ((frost$core$Object*) $tmp19));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp19));
// line 19
*(&local2) = ((org$frostlang$frostc$IR$Value*) NULL);
// line 20
org$frostlang$frostc$Compiler$TypeContext* $tmp20 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(33, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp21 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp22 = org$frostlang$frostc$Type$Bit$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp23 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp20, $tmp21, $tmp22, $tmp23);
org$frostlang$frostc$IR$Value* $tmp24 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param2, $tmp20);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp24));
org$frostlang$frostc$IR$Value* $tmp25 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp25));
*(&local2) = $tmp24;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp24));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp22));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp20));
// line 21
org$frostlang$frostc$IR$Value* $tmp26 = *(&local2);
frost$core$Bit $tmp27 = frost$core$Bit$init$builtin_bit($tmp26 == NULL);
bool $tmp28 = $tmp27.value;
if ($tmp28) goto block1; else goto block2;
block1:;
// line 22
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$IR$Value* $tmp29 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp29));
*(&local2) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp30 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp30));
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp31 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp31));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block2:;
// line 24
org$frostlang$frostc$IR* $tmp32 = *(&local0);
$fn34 $tmp33 = ($fn34) $tmp32->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp35 = $tmp33($tmp32, &$s36);
*(&local3) = $tmp35;
// line 25
org$frostlang$frostc$IR* $tmp37 = *(&local0);
$fn39 $tmp38 = ($fn39) $tmp37->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp40 = $tmp38($tmp37, &$s41);
*(&local4) = $tmp40;
// line 26
org$frostlang$frostc$IR* $tmp42 = *(&local0);
$fn44 $tmp43 = ($fn44) $tmp42->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp45 = $tmp43($tmp42, &$s46);
*(&local5) = $tmp45;
// line 27
org$frostlang$frostc$IR* $tmp47 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp48 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp49 = (frost$core$Int64) {5};
org$frostlang$frostc$IR$Value* $tmp50 = *(&local2);
org$frostlang$frostc$IR$Value* $tmp51 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp50);
org$frostlang$frostc$IR$Block$ID $tmp52 = *(&local3);
org$frostlang$frostc$IR$Block$ID $tmp53 = *(&local4);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp48, $tmp49, param1, $tmp51, $tmp52, $tmp53);
$fn55 $tmp54 = ($fn55) $tmp47->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp56 = $tmp54($tmp47, $tmp48);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp51));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp48));
// line 29
org$frostlang$frostc$IR* $tmp57 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp58 = *(&local3);
$fn60 $tmp59 = ($fn60) $tmp57->$class->vtable[4];
$tmp59($tmp57, $tmp58);
// line 30
org$frostlang$frostc$IR* $tmp61 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp62 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp63 = (frost$core$Int64) {27};
org$frostlang$frostc$IR$Value* $tmp64 = *(&local2);
org$frostlang$frostc$IR$Value* $tmp65 = *(&local1);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value($tmp62, $tmp63, param1, $tmp64, $tmp65);
$fn67 $tmp66 = ($fn67) $tmp61->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp68 = $tmp66($tmp61, $tmp62);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp62));
// line 31
org$frostlang$frostc$IR* $tmp69 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp70 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp71 = (frost$core$Int64) {1};
org$frostlang$frostc$IR$Block$ID $tmp72 = *(&local5);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Block$ID($tmp70, $tmp71, param1, $tmp72);
$fn74 $tmp73 = ($fn74) $tmp69->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp75 = $tmp73($tmp69, $tmp70);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp70));
// line 32
org$frostlang$frostc$IR* $tmp76 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp77 = *(&local4);
$fn79 $tmp78 = ($fn79) $tmp76->$class->vtable[4];
$tmp78($tmp76, $tmp77);
// line 33
*(&local6) = ((org$frostlang$frostc$IR$Value*) NULL);
// line 1
// line 35
org$frostlang$frostc$Compiler$AutoUnrefs* $tmp80 = (org$frostlang$frostc$Compiler$AutoUnrefs*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoUnrefs$class);
org$frostlang$frostc$Compiler$AutoUnrefs$init$org$frostlang$frostc$Compiler($tmp80, param0);
*(&local7) = ((org$frostlang$frostc$Compiler$AutoUnrefs*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp80));
org$frostlang$frostc$Compiler$AutoUnrefs* $tmp81 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp81));
*(&local7) = $tmp80;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp80));
// line 36
org$frostlang$frostc$Compiler$TypeContext* $tmp82 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(33, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp83 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp84 = org$frostlang$frostc$Type$Bit$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp85 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp82, $tmp83, $tmp84, $tmp85);
org$frostlang$frostc$IR$Value* $tmp86 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param3, $tmp82);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp86));
org$frostlang$frostc$IR$Value* $tmp87 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp87));
*(&local6) = $tmp86;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp86));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp84));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp82));
// line 37
org$frostlang$frostc$IR$Value* $tmp88 = *(&local6);
frost$core$Bit $tmp89 = frost$core$Bit$init$builtin_bit($tmp88 == NULL);
bool $tmp90 = $tmp89.value;
if ($tmp90) goto block3; else goto block4;
block3:;
// line 38
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$Compiler$AutoUnrefs* $tmp91 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp91));
*(&local7) = ((org$frostlang$frostc$Compiler$AutoUnrefs*) NULL);
org$frostlang$frostc$IR$Value* $tmp92 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp92));
*(&local6) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp93 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp93));
*(&local2) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp94 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp94));
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp95 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp95));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block4:;
org$frostlang$frostc$Compiler$AutoUnrefs* $tmp96 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp96));
*(&local7) = ((org$frostlang$frostc$Compiler$AutoUnrefs*) NULL);
// line 41
org$frostlang$frostc$IR* $tmp97 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp98 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp99 = (frost$core$Int64) {27};
org$frostlang$frostc$IR$Value* $tmp100 = *(&local6);
org$frostlang$frostc$IR$Value* $tmp101 = *(&local1);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value($tmp98, $tmp99, param1, $tmp100, $tmp101);
$fn103 $tmp102 = ($fn103) $tmp97->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp104 = $tmp102($tmp97, $tmp98);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp98));
// line 42
org$frostlang$frostc$IR* $tmp105 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp106 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp107 = (frost$core$Int64) {1};
org$frostlang$frostc$IR$Block$ID $tmp108 = *(&local5);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Block$ID($tmp106, $tmp107, param1, $tmp108);
$fn110 $tmp109 = ($fn110) $tmp105->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp111 = $tmp109($tmp105, $tmp106);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp106));
// line 43
org$frostlang$frostc$IR* $tmp112 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp113 = *(&local5);
$fn115 $tmp114 = ($fn115) $tmp112->$class->vtable[4];
$tmp114($tmp112, $tmp113);
// line 44
org$frostlang$frostc$IR* $tmp116 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp117 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp118 = (frost$core$Int64) {14};
org$frostlang$frostc$IR$Value* $tmp119 = *(&local1);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp117, $tmp118, param1, $tmp119);
$fn121 $tmp120 = ($fn121) $tmp116->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp122 = $tmp120($tmp116, $tmp117);
*(&local8) = $tmp122;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp117));
// line 45
org$frostlang$frostc$IR$Value* $tmp123 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp124 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp125 = *(&local8);
org$frostlang$frostc$Type* $tmp126 = org$frostlang$frostc$Type$Bit$R$org$frostlang$frostc$Type();
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp123, $tmp124, $tmp125, $tmp126);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp123));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp126));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp123));
org$frostlang$frostc$IR$Value* $tmp127 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp127));
*(&local6) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp128 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp128));
*(&local2) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR$Value* $tmp129 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp129));
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp130 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp130));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return $tmp123;

}
void org$frostlang$frostc$expression$Or$compileConditionalBranch$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$ASTNode$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, org$frostlang$frostc$ASTNode* param2, org$frostlang$frostc$ASTNode* param3, org$frostlang$frostc$IR$Block$ID param4, org$frostlang$frostc$IR$Block$ID param5) {

org$frostlang$frostc$IR$Block$ID local0;
// line 51
org$frostlang$frostc$IR** $tmp131 = &param0->ir;
org$frostlang$frostc$IR* $tmp132 = *$tmp131;
$fn134 $tmp133 = ($fn134) $tmp132->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp135 = $tmp133($tmp132, &$s136);
*(&local0) = $tmp135;
// line 52
org$frostlang$frostc$IR$Block$ID $tmp137 = *(&local0);
org$frostlang$frostc$Compiler$compileConditionalBranch$org$frostlang$frostc$ASTNode$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID(param0, param2, param4, $tmp137);
// line 53
org$frostlang$frostc$IR** $tmp138 = &param0->ir;
org$frostlang$frostc$IR* $tmp139 = *$tmp138;
org$frostlang$frostc$IR$Block$ID $tmp140 = *(&local0);
$fn142 $tmp141 = ($fn142) $tmp139->$class->vtable[4];
$tmp141($tmp139, $tmp140);
// line 54
org$frostlang$frostc$Compiler$compileConditionalBranch$org$frostlang$frostc$ASTNode$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID(param0, param3, param4, param5);
return;

}
void org$frostlang$frostc$expression$Or$init(org$frostlang$frostc$expression$Or* param0) {

return;

}
void org$frostlang$frostc$expression$Or$cleanup(org$frostlang$frostc$expression$Or* param0) {

// line 11
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}






