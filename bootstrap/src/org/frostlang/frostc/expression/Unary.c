#include "org/frostlang/frostc/expression/Unary.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/IR/Value.h"
#include "org/frostlang/frostc/Compiler.h"
#include "org/frostlang/frostc/Position.h"
#include "org/frostlang/frostc/expression/Unary/Operator.h"
#include "org/frostlang/frostc/ASTNode.h"
#include "org/frostlang/frostc/Compiler/TypeContext.h"
#include "org/frostlang/frostc/IR.h"
#include "frost/core/UInt64.h"
#include "org/frostlang/frostc/Type.h"
#include "frost/core/Bit.h"
#include "frost/collections/Array.h"
#include "org/frostlang/frostc/IR/Statement/ID.h"
#include "frost/core/Frost.h"
#include "frost/core/Int64.h"
#include "org/frostlang/frostc/Type/Kind.h"
#include "frost/core/Equatable.h"
#include "frost/collections/ListView.h"
#include "org/frostlang/frostc/expression/Call.h"
#include "org/frostlang/frostc/IR/Statement.h"


static frost$core$String $s1;
org$frostlang$frostc$expression$Unary$class_type org$frostlang$frostc$expression$Unary$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$expression$Unary$cleanup} };

typedef frost$core$Bit (*$fn37)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn49)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Type* (*$fn90)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn99)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$Type* (*$fn106)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn132)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn142)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$Type* (*$fn172)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn181)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$Type* (*$fn188)(org$frostlang$frostc$IR$Value*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2e\x55\x6e\x61\x72\x79", 37, 3193902451946592297, NULL };
static frost$core$String $s115 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d", 1, 146, NULL };
static frost$core$String $s155 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x21", 1, 134, NULL };
static frost$core$String $s197 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x21\x21", 2, 13567, NULL };
static frost$core$String $s203 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x55\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 11, 6986272374594638012, NULL };

org$frostlang$frostc$IR$Value* org$frostlang$frostc$expression$Unary$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$expression$Unary$Operator$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, org$frostlang$frostc$expression$Unary$Operator param2, org$frostlang$frostc$ASTNode* param3, org$frostlang$frostc$Compiler$TypeContext* param4) {

org$frostlang$frostc$IR* local0 = NULL;
frost$core$UInt64 local1;
org$frostlang$frostc$Type* local2 = NULL;
frost$core$Bit local3;
frost$collections$Array* local4 = NULL;
org$frostlang$frostc$IR$Value* local5 = NULL;
org$frostlang$frostc$IR$Statement$ID local6;
org$frostlang$frostc$IR$Value* local7 = NULL;
org$frostlang$frostc$IR$Statement$ID local8;
org$frostlang$frostc$IR$Value* local9 = NULL;
org$frostlang$frostc$IR$Statement$ID local10;
// line 46
org$frostlang$frostc$IR** $tmp2 = &param0->ir;
org$frostlang$frostc$IR* $tmp3 = *$tmp2;
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3));
org$frostlang$frostc$IR* $tmp4 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4));
*(&local0) = $tmp3;
// line 47
frost$core$Int64 $tmp5 = param2.$rawValue;
frost$core$Int64 $tmp6 = (frost$core$Int64) {2};
frost$core$Bit $tmp7 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5, $tmp6);
bool $tmp8 = $tmp7.value;
if ($tmp8) goto block2; else goto block3;
block2:;
// line 49
frost$core$Int64* $tmp9 = &param3->$rawValue;
frost$core$Int64 $tmp10 = *$tmp9;
frost$core$Int64 $tmp11 = (frost$core$Int64) {25};
frost$core$Bit $tmp12 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp10, $tmp11);
bool $tmp13 = $tmp12.value;
if ($tmp13) goto block5; else goto block4;
block5:;
org$frostlang$frostc$Position* $tmp14 = (org$frostlang$frostc$Position*) (param3->$data + 0);
org$frostlang$frostc$Position $tmp15 = *$tmp14;
frost$core$UInt64* $tmp16 = (frost$core$UInt64*) (param3->$data + 16);
frost$core$UInt64 $tmp17 = *$tmp16;
*(&local1) = $tmp17;
// line 51
frost$core$Int64* $tmp18 = &param4->$rawValue;
frost$core$Int64 $tmp19 = *$tmp18;
frost$core$Int64 $tmp20 = (frost$core$Int64) {3};
frost$core$Bit $tmp21 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp19, $tmp20);
bool $tmp22 = $tmp21.value;
if ($tmp22) goto block7; else goto block6;
block7:;
org$frostlang$frostc$Type** $tmp23 = (org$frostlang$frostc$Type**) (param4->$data + 0);
org$frostlang$frostc$Type* $tmp24 = *$tmp23;
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp24));
org$frostlang$frostc$Type* $tmp25 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp25));
*(&local2) = $tmp24;
frost$core$Bit* $tmp26 = (frost$core$Bit*) (param4->$data + 8);
frost$core$Bit $tmp27 = *$tmp26;
// line 53
org$frostlang$frostc$Type* $tmp28 = *(&local2);
org$frostlang$frostc$Type$Kind* $tmp29 = &$tmp28->typeKind;
org$frostlang$frostc$Type$Kind $tmp30 = *$tmp29;
org$frostlang$frostc$Type$Kind$wrapper* $tmp31;
$tmp31 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp31->value = $tmp30;
frost$core$Int64 $tmp32 = (frost$core$Int64) {2};
org$frostlang$frostc$Type$Kind $tmp33 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp32);
org$frostlang$frostc$Type$Kind$wrapper* $tmp34;
$tmp34 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp34->value = $tmp33;
ITable* $tmp35 = ((frost$core$Equatable*) $tmp31)->$class->itable;
while ($tmp35->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp35 = $tmp35->next;
}
$fn37 $tmp36 = $tmp35->methods[0];
frost$core$Bit $tmp38 = $tmp36(((frost$core$Equatable*) $tmp31), ((frost$core$Equatable*) $tmp34));
bool $tmp39 = $tmp38.value;
if ($tmp39) goto block10; else goto block11;
block10:;
*(&local3) = $tmp38;
goto block12;
block11:;
org$frostlang$frostc$Type* $tmp40 = *(&local2);
org$frostlang$frostc$Type$Kind* $tmp41 = &$tmp40->typeKind;
org$frostlang$frostc$Type$Kind $tmp42 = *$tmp41;
org$frostlang$frostc$Type$Kind$wrapper* $tmp43;
$tmp43 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp43->value = $tmp42;
frost$core$Int64 $tmp44 = (frost$core$Int64) {3};
org$frostlang$frostc$Type$Kind $tmp45 = org$frostlang$frostc$Type$Kind$init$frost$core$Int64($tmp44);
org$frostlang$frostc$Type$Kind$wrapper* $tmp46;
$tmp46 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp46->value = $tmp45;
ITable* $tmp47 = ((frost$core$Equatable*) $tmp43)->$class->itable;
while ($tmp47->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp47 = $tmp47->next;
}
$fn49 $tmp48 = $tmp47->methods[0];
frost$core$Bit $tmp50 = $tmp48(((frost$core$Equatable*) $tmp43), ((frost$core$Equatable*) $tmp46));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp46)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp43)));
*(&local3) = $tmp50;
goto block12;
block12:;
frost$core$Bit $tmp51 = *(&local3);
bool $tmp52 = $tmp51.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp34)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp31)));
if ($tmp52) goto block8; else goto block9;
block8:;
// line 55
org$frostlang$frostc$IR$Value* $tmp53 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp54 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp55 = *(&local1);
frost$core$UInt64 $tmp56 = frost$core$UInt64$$SUB$R$frost$core$UInt64($tmp55);
org$frostlang$frostc$Type* $tmp57 = *(&local2);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$frost$core$UInt64$org$frostlang$frostc$Type($tmp53, $tmp54, $tmp56, $tmp57);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp53));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp53));
org$frostlang$frostc$Type* $tmp58 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp58));
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp59 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp59));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return $tmp53;
block9:;
// line 57
org$frostlang$frostc$Type* $tmp60 = *(&local2);
frost$core$Bit $tmp61 = org$frostlang$frostc$Type$get_isNumber$R$frost$core$Bit($tmp60);
bool $tmp62 = $tmp61.value;
if ($tmp62) goto block13; else goto block14;
block13:;
// line 58
frost$collections$Array* $tmp63 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp63);
*(&local4) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp63));
frost$collections$Array* $tmp64 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp64));
*(&local4) = $tmp63;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp63));
// line 59
frost$collections$Array* $tmp65 = *(&local4);
org$frostlang$frostc$ASTNode* $tmp66 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp67 = (frost$core$Int64) {25};
frost$core$UInt64 $tmp68 = *(&local1);
frost$core$UInt64 $tmp69 = frost$core$UInt64$$SUB$R$frost$core$UInt64($tmp68);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$UInt64($tmp66, $tmp67, param1, $tmp69);
frost$collections$Array$add$frost$collections$Array$T($tmp65, ((frost$core$Object*) $tmp66));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp66));
// line 60
org$frostlang$frostc$IR$Value* $tmp70 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp71 = (frost$core$Int64) {14};
org$frostlang$frostc$Type* $tmp72 = *(&local2);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$Type($tmp70, $tmp71, $tmp72);
frost$collections$Array* $tmp73 = *(&local4);
org$frostlang$frostc$IR$Value* $tmp74 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp70, ((frost$collections$ListView*) $tmp73), param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp74));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp74));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp70));
frost$collections$Array* $tmp75 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp75));
*(&local4) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Type* $tmp76 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp76));
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp77 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp77));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return $tmp74;
block14:;
org$frostlang$frostc$Type* $tmp78 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp78));
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
goto block6;
block6:;
goto block4;
block4:;
// line 67
org$frostlang$frostc$Compiler$TypeContext* $tmp79 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(33, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp80 = (frost$core$Int64) {1};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp79, $tmp80);
org$frostlang$frostc$IR$Value* $tmp81 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param3, $tmp79);
*(&local5) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp81));
org$frostlang$frostc$IR$Value* $tmp82 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp82));
*(&local5) = $tmp81;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp81));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp79));
// line 68
org$frostlang$frostc$IR$Value* $tmp83 = *(&local5);
frost$core$Bit $tmp84 = frost$core$Bit$init$builtin_bit($tmp83 == NULL);
bool $tmp85 = $tmp84.value;
if ($tmp85) goto block15; else goto block16;
block15:;
// line 69
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$IR$Value* $tmp86 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp86));
*(&local5) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp87 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp87));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block16:;
// line 71
org$frostlang$frostc$IR$Value* $tmp88 = *(&local5);
$fn90 $tmp89 = ($fn90) $tmp88->$class->vtable[2];
org$frostlang$frostc$Type* $tmp91 = $tmp89($tmp88);
frost$core$Bit $tmp92 = org$frostlang$frostc$Type$get_isBuiltinNumber$R$frost$core$Bit($tmp91);
bool $tmp93 = $tmp92.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp91));
if ($tmp93) goto block17; else goto block18;
block17:;
// line 72
org$frostlang$frostc$IR* $tmp94 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp95 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp96 = (frost$core$Int64) {15};
org$frostlang$frostc$IR$Value* $tmp97 = *(&local5);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp95, $tmp96, param1, $tmp97);
$fn99 $tmp98 = ($fn99) $tmp94->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp100 = $tmp98($tmp94, $tmp95);
*(&local6) = $tmp100;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp95));
// line 73
org$frostlang$frostc$IR$Value* $tmp101 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp102 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp103 = *(&local6);
org$frostlang$frostc$IR$Value* $tmp104 = *(&local5);
$fn106 $tmp105 = ($fn106) $tmp104->$class->vtable[2];
org$frostlang$frostc$Type* $tmp107 = $tmp105($tmp104);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp101, $tmp102, $tmp103, $tmp107);
org$frostlang$frostc$IR$Value* $tmp108 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp101, param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp108));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp108));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp107));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp101));
org$frostlang$frostc$IR$Value* $tmp109 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp109));
*(&local5) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp110 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp110));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return $tmp108;
block18:;
// line 75
org$frostlang$frostc$IR$Value* $tmp111 = *(&local5);
frost$collections$Array* $tmp112 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp113 = (frost$core$Int64) {0};
frost$collections$Array$init$frost$core$Int64($tmp112, $tmp113);
org$frostlang$frostc$IR$Value* $tmp114 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp111, &$s115, ((frost$collections$ListView*) $tmp112), param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp114));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp114));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp112));
org$frostlang$frostc$IR$Value* $tmp116 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp116));
*(&local5) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp117 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp117));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return $tmp114;
block3:;
frost$core$Int64 $tmp118 = (frost$core$Int64) {0};
frost$core$Bit $tmp119 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5, $tmp118);
bool $tmp120 = $tmp119.value;
if ($tmp120) goto block19; else goto block20;
block19:;
// line 78
org$frostlang$frostc$Compiler$TypeContext* $tmp121 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(33, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp122 = (frost$core$Int64) {1};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp121, $tmp122);
org$frostlang$frostc$IR$Value* $tmp123 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param3, $tmp121);
*(&local7) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp123));
org$frostlang$frostc$IR$Value* $tmp124 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp124));
*(&local7) = $tmp123;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp123));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp121));
// line 79
org$frostlang$frostc$IR$Value* $tmp125 = *(&local7);
frost$core$Bit $tmp126 = frost$core$Bit$init$builtin_bit($tmp125 == NULL);
bool $tmp127 = $tmp126.value;
if ($tmp127) goto block21; else goto block22;
block21:;
// line 80
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$IR$Value* $tmp128 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp128));
*(&local7) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp129 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp129));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block22:;
// line 82
org$frostlang$frostc$IR$Value* $tmp130 = *(&local7);
$fn132 $tmp131 = ($fn132) $tmp130->$class->vtable[2];
org$frostlang$frostc$Type* $tmp133 = $tmp131($tmp130);
org$frostlang$frostc$Type* $tmp134 = org$frostlang$frostc$Type$BuiltinBit$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp135 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit($tmp133, $tmp134);
bool $tmp136 = $tmp135.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp134));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp133));
if ($tmp136) goto block23; else goto block24;
block23:;
// line 83
org$frostlang$frostc$IR* $tmp137 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp138 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp139 = (frost$core$Int64) {16};
org$frostlang$frostc$IR$Value* $tmp140 = *(&local7);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp138, $tmp139, param1, $tmp140);
$fn142 $tmp141 = ($fn142) $tmp137->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp143 = $tmp141($tmp137, $tmp138);
*(&local8) = $tmp143;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp138));
// line 84
org$frostlang$frostc$IR$Value* $tmp144 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp145 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp146 = *(&local8);
org$frostlang$frostc$Type* $tmp147 = org$frostlang$frostc$Type$BuiltinBit$R$org$frostlang$frostc$Type();
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp144, $tmp145, $tmp146, $tmp147);
org$frostlang$frostc$IR$Value* $tmp148 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp144, param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp148));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp148));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp147));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp144));
org$frostlang$frostc$IR$Value* $tmp149 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp149));
*(&local7) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp150 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp150));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return $tmp148;
block24:;
// line 86
org$frostlang$frostc$IR$Value* $tmp151 = *(&local7);
frost$collections$Array* $tmp152 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp153 = (frost$core$Int64) {0};
frost$collections$Array$init$frost$core$Int64($tmp152, $tmp153);
org$frostlang$frostc$IR$Value* $tmp154 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp151, &$s155, ((frost$collections$ListView*) $tmp152), param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp154));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp154));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp152));
org$frostlang$frostc$IR$Value* $tmp156 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp156));
*(&local7) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp157 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp157));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return $tmp154;
block20:;
frost$core$Int64 $tmp158 = (frost$core$Int64) {1};
frost$core$Bit $tmp159 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5, $tmp158);
bool $tmp160 = $tmp159.value;
if ($tmp160) goto block25; else goto block1;
block25:;
// line 89
org$frostlang$frostc$Compiler$TypeContext* $tmp161 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(33, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp162 = (frost$core$Int64) {1};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp161, $tmp162);
org$frostlang$frostc$IR$Value* $tmp163 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param3, $tmp161);
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp163));
org$frostlang$frostc$IR$Value* $tmp164 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp164));
*(&local9) = $tmp163;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp163));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp161));
// line 90
org$frostlang$frostc$IR$Value* $tmp165 = *(&local9);
frost$core$Bit $tmp166 = frost$core$Bit$init$builtin_bit($tmp165 == NULL);
bool $tmp167 = $tmp166.value;
if ($tmp167) goto block26; else goto block27;
block26:;
// line 91
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$IR$Value* $tmp168 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp168));
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp169 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp169));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block27:;
// line 93
org$frostlang$frostc$IR$Value* $tmp170 = *(&local9);
$fn172 $tmp171 = ($fn172) $tmp170->$class->vtable[2];
org$frostlang$frostc$Type* $tmp173 = $tmp171($tmp170);
frost$core$Bit $tmp174 = org$frostlang$frostc$Type$get_isBuiltinNumber$R$frost$core$Bit($tmp173);
bool $tmp175 = $tmp174.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp173));
if ($tmp175) goto block28; else goto block29;
block28:;
// line 94
org$frostlang$frostc$IR* $tmp176 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp177 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp178 = (frost$core$Int64) {16};
org$frostlang$frostc$IR$Value* $tmp179 = *(&local9);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp177, $tmp178, param1, $tmp179);
$fn181 $tmp180 = ($fn181) $tmp176->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp182 = $tmp180($tmp176, $tmp177);
*(&local10) = $tmp182;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp177));
// line 95
org$frostlang$frostc$IR$Value* $tmp183 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp184 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp185 = *(&local10);
org$frostlang$frostc$IR$Value* $tmp186 = *(&local9);
$fn188 $tmp187 = ($fn188) $tmp186->$class->vtable[2];
org$frostlang$frostc$Type* $tmp189 = $tmp187($tmp186);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp183, $tmp184, $tmp185, $tmp189);
org$frostlang$frostc$IR$Value* $tmp190 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp183, param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp190));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp190));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp189));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp183));
org$frostlang$frostc$IR$Value* $tmp191 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp191));
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp192 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp192));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return $tmp190;
block29:;
// line 97
org$frostlang$frostc$IR$Value* $tmp193 = *(&local9);
frost$collections$Array* $tmp194 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp195 = (frost$core$Int64) {0};
frost$collections$Array$init$frost$core$Int64($tmp194, $tmp195);
org$frostlang$frostc$IR$Value* $tmp196 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp193, &$s197, ((frost$collections$ListView*) $tmp194), param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp196));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp196));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp194));
org$frostlang$frostc$IR$Value* $tmp198 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp198));
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp199 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp199));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return $tmp196;
block1:;
// line 100
frost$core$Bit $tmp200 = frost$core$Bit$init$builtin_bit(false);
bool $tmp201 = $tmp200.value;
if ($tmp201) goto block30; else goto block31;
block31:;
frost$core$Int64 $tmp202 = (frost$core$Int64) {100};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s203, $tmp202);
abort(); // unreachable
block30:;
// line 101
goto block32;
block32:;
goto block32;
block33:;
goto block34;
block34:;

}
void org$frostlang$frostc$expression$Unary$init(org$frostlang$frostc$expression$Unary* param0) {

return;

}
void org$frostlang$frostc$expression$Unary$cleanup(org$frostlang$frostc$expression$Unary* param0) {

// line 16
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}

