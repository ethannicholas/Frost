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
#include "frost/collections/Array.h"
#include "org/frostlang/frostc/IR/Statement/ID.h"
#include "frost/core/Frost.h"
#include "frost/core/Int64.h"
#include "frost/core/Bit.h"
#include "org/frostlang/frostc/Type/Kind.h"
#include "frost/core/Equatable.h"
#include "frost/collections/ListView.h"
#include "org/frostlang/frostc/expression/Call.h"
#include "org/frostlang/frostc/IR/Statement.h"


static frost$core$String $s1;
org$frostlang$frostc$expression$Unary$class_type org$frostlang$frostc$expression$Unary$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$expression$Unary$cleanup} };

typedef frost$core$Bit (*$fn37)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn49)(frost$core$Equatable*, frost$core$Equatable*);
typedef org$frostlang$frostc$Type* (*$fn89)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn98)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$Type* (*$fn105)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn131)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn141)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$Type* (*$fn171)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn180)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$Type* (*$fn187)(org$frostlang$frostc$IR$Value*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2e\x55\x6e\x61\x72\x79", 37, 3193902451946592297, NULL };
static frost$core$String $s114 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d", 1, 146, NULL };
static frost$core$String $s154 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x21", 1, 134, NULL };
static frost$core$String $s196 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x21\x21", 2, 13567, NULL };
static frost$core$String $s200 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x55\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 11, 6986272374594638012, NULL };

org$frostlang$frostc$IR$Value* org$frostlang$frostc$expression$Unary$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$expression$Unary$Operator$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, org$frostlang$frostc$expression$Unary$Operator param2, org$frostlang$frostc$ASTNode* param3, org$frostlang$frostc$Compiler$TypeContext* param4) {

org$frostlang$frostc$IR* local0 = NULL;
frost$core$UInt64 local1;
org$frostlang$frostc$Type* local2 = NULL;
frost$collections$Array* local3 = NULL;
org$frostlang$frostc$IR$Value* local4 = NULL;
org$frostlang$frostc$IR$Statement$ID local5;
org$frostlang$frostc$IR$Value* local6 = NULL;
org$frostlang$frostc$IR$Statement$ID local7;
org$frostlang$frostc$IR$Value* local8 = NULL;
org$frostlang$frostc$IR$Statement$ID local9;
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
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp34)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp31)));
if ($tmp39) goto block8; else goto block10;
block10:;
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
bool $tmp51 = $tmp50.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp46)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp43)));
if ($tmp51) goto block8; else goto block9;
block8:;
// line 55
org$frostlang$frostc$IR$Value* $tmp52 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp53 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp54 = *(&local1);
frost$core$UInt64 $tmp55 = frost$core$UInt64$$SUB$R$frost$core$UInt64($tmp54);
org$frostlang$frostc$Type* $tmp56 = *(&local2);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$frost$core$UInt64$org$frostlang$frostc$Type($tmp52, $tmp53, $tmp55, $tmp56);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp52));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp52));
org$frostlang$frostc$Type* $tmp57 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp57));
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp58 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp58));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return $tmp52;
block9:;
// line 57
org$frostlang$frostc$Type* $tmp59 = *(&local2);
frost$core$Bit $tmp60 = org$frostlang$frostc$Type$get_isNumber$R$frost$core$Bit($tmp59);
bool $tmp61 = $tmp60.value;
if ($tmp61) goto block11; else goto block12;
block11:;
// line 58
frost$collections$Array* $tmp62 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp62);
*(&local3) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp62));
frost$collections$Array* $tmp63 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp63));
*(&local3) = $tmp62;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp62));
// line 59
frost$collections$Array* $tmp64 = *(&local3);
org$frostlang$frostc$ASTNode* $tmp65 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(104, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp66 = (frost$core$Int64) {25};
frost$core$UInt64 $tmp67 = *(&local1);
frost$core$UInt64 $tmp68 = frost$core$UInt64$$SUB$R$frost$core$UInt64($tmp67);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$UInt64($tmp65, $tmp66, param1, $tmp68);
frost$collections$Array$add$frost$collections$Array$T($tmp64, ((frost$core$Object*) $tmp65));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp65));
// line 60
org$frostlang$frostc$IR$Value* $tmp69 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp70 = (frost$core$Int64) {14};
org$frostlang$frostc$Type* $tmp71 = *(&local2);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$Type($tmp69, $tmp70, $tmp71);
frost$collections$Array* $tmp72 = *(&local3);
org$frostlang$frostc$IR$Value* $tmp73 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp69, ((frost$collections$ListView*) $tmp72), param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp73));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp73));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp69));
frost$collections$Array* $tmp74 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp74));
*(&local3) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Type* $tmp75 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp75));
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
org$frostlang$frostc$IR* $tmp76 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp76));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return $tmp73;
block12:;
org$frostlang$frostc$Type* $tmp77 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp77));
*(&local2) = ((org$frostlang$frostc$Type*) NULL);
goto block6;
block6:;
goto block4;
block4:;
// line 67
org$frostlang$frostc$Compiler$TypeContext* $tmp78 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(33, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp79 = (frost$core$Int64) {1};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp78, $tmp79);
org$frostlang$frostc$IR$Value* $tmp80 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param3, $tmp78);
*(&local4) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp80));
org$frostlang$frostc$IR$Value* $tmp81 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp81));
*(&local4) = $tmp80;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp80));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp78));
// line 68
org$frostlang$frostc$IR$Value* $tmp82 = *(&local4);
frost$core$Bit $tmp83 = frost$core$Bit$init$builtin_bit($tmp82 == NULL);
bool $tmp84 = $tmp83.value;
if ($tmp84) goto block13; else goto block14;
block13:;
// line 69
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$IR$Value* $tmp85 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp85));
*(&local4) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp86 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp86));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block14:;
// line 71
org$frostlang$frostc$IR$Value* $tmp87 = *(&local4);
$fn89 $tmp88 = ($fn89) $tmp87->$class->vtable[2];
org$frostlang$frostc$Type* $tmp90 = $tmp88($tmp87);
frost$core$Bit $tmp91 = org$frostlang$frostc$Type$get_isBuiltinNumber$R$frost$core$Bit($tmp90);
bool $tmp92 = $tmp91.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp90));
if ($tmp92) goto block15; else goto block16;
block15:;
// line 72
org$frostlang$frostc$IR* $tmp93 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp94 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp95 = (frost$core$Int64) {15};
org$frostlang$frostc$IR$Value* $tmp96 = *(&local4);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp94, $tmp95, param1, $tmp96);
$fn98 $tmp97 = ($fn98) $tmp93->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp99 = $tmp97($tmp93, $tmp94);
*(&local5) = $tmp99;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp94));
// line 73
org$frostlang$frostc$IR$Value* $tmp100 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp101 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp102 = *(&local5);
org$frostlang$frostc$IR$Value* $tmp103 = *(&local4);
$fn105 $tmp104 = ($fn105) $tmp103->$class->vtable[2];
org$frostlang$frostc$Type* $tmp106 = $tmp104($tmp103);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp100, $tmp101, $tmp102, $tmp106);
org$frostlang$frostc$IR$Value* $tmp107 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp100, param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp107));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp107));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp106));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp100));
org$frostlang$frostc$IR$Value* $tmp108 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp108));
*(&local4) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp109 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp109));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return $tmp107;
block16:;
// line 75
org$frostlang$frostc$IR$Value* $tmp110 = *(&local4);
frost$collections$Array* $tmp111 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp112 = (frost$core$Int64) {0};
frost$collections$Array$init$frost$core$Int64($tmp111, $tmp112);
org$frostlang$frostc$IR$Value* $tmp113 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp110, &$s114, ((frost$collections$ListView*) $tmp111), param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp113));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp113));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp111));
org$frostlang$frostc$IR$Value* $tmp115 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp115));
*(&local4) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp116 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp116));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return $tmp113;
block3:;
frost$core$Int64 $tmp117 = (frost$core$Int64) {0};
frost$core$Bit $tmp118 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5, $tmp117);
bool $tmp119 = $tmp118.value;
if ($tmp119) goto block17; else goto block18;
block17:;
// line 78
org$frostlang$frostc$Compiler$TypeContext* $tmp120 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(33, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp121 = (frost$core$Int64) {1};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp120, $tmp121);
org$frostlang$frostc$IR$Value* $tmp122 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param3, $tmp120);
*(&local6) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp122));
org$frostlang$frostc$IR$Value* $tmp123 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp123));
*(&local6) = $tmp122;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp122));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp120));
// line 79
org$frostlang$frostc$IR$Value* $tmp124 = *(&local6);
frost$core$Bit $tmp125 = frost$core$Bit$init$builtin_bit($tmp124 == NULL);
bool $tmp126 = $tmp125.value;
if ($tmp126) goto block19; else goto block20;
block19:;
// line 80
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$IR$Value* $tmp127 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp127));
*(&local6) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp128 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp128));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block20:;
// line 82
org$frostlang$frostc$IR$Value* $tmp129 = *(&local6);
$fn131 $tmp130 = ($fn131) $tmp129->$class->vtable[2];
org$frostlang$frostc$Type* $tmp132 = $tmp130($tmp129);
org$frostlang$frostc$Type* $tmp133 = org$frostlang$frostc$Type$BuiltinBit$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp134 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit($tmp132, $tmp133);
bool $tmp135 = $tmp134.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp133));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp132));
if ($tmp135) goto block21; else goto block22;
block21:;
// line 83
org$frostlang$frostc$IR* $tmp136 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp137 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp138 = (frost$core$Int64) {16};
org$frostlang$frostc$IR$Value* $tmp139 = *(&local6);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp137, $tmp138, param1, $tmp139);
$fn141 $tmp140 = ($fn141) $tmp136->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp142 = $tmp140($tmp136, $tmp137);
*(&local7) = $tmp142;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp137));
// line 84
org$frostlang$frostc$IR$Value* $tmp143 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp144 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp145 = *(&local7);
org$frostlang$frostc$Type* $tmp146 = org$frostlang$frostc$Type$BuiltinBit$R$org$frostlang$frostc$Type();
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp143, $tmp144, $tmp145, $tmp146);
org$frostlang$frostc$IR$Value* $tmp147 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp143, param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp147));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp147));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp146));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp143));
org$frostlang$frostc$IR$Value* $tmp148 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp148));
*(&local6) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp149 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp149));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return $tmp147;
block22:;
// line 86
org$frostlang$frostc$IR$Value* $tmp150 = *(&local6);
frost$collections$Array* $tmp151 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp152 = (frost$core$Int64) {0};
frost$collections$Array$init$frost$core$Int64($tmp151, $tmp152);
org$frostlang$frostc$IR$Value* $tmp153 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp150, &$s154, ((frost$collections$ListView*) $tmp151), param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp153));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp153));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp151));
org$frostlang$frostc$IR$Value* $tmp155 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp155));
*(&local6) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp156 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp156));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return $tmp153;
block18:;
frost$core$Int64 $tmp157 = (frost$core$Int64) {1};
frost$core$Bit $tmp158 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5, $tmp157);
bool $tmp159 = $tmp158.value;
if ($tmp159) goto block23; else goto block1;
block23:;
// line 89
org$frostlang$frostc$Compiler$TypeContext* $tmp160 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(33, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp161 = (frost$core$Int64) {1};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp160, $tmp161);
org$frostlang$frostc$IR$Value* $tmp162 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param3, $tmp160);
*(&local8) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp162));
org$frostlang$frostc$IR$Value* $tmp163 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp163));
*(&local8) = $tmp162;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp162));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp160));
// line 90
org$frostlang$frostc$IR$Value* $tmp164 = *(&local8);
frost$core$Bit $tmp165 = frost$core$Bit$init$builtin_bit($tmp164 == NULL);
bool $tmp166 = $tmp165.value;
if ($tmp166) goto block24; else goto block25;
block24:;
// line 91
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$IR$Value* $tmp167 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp167));
*(&local8) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp168 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp168));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block25:;
// line 93
org$frostlang$frostc$IR$Value* $tmp169 = *(&local8);
$fn171 $tmp170 = ($fn171) $tmp169->$class->vtable[2];
org$frostlang$frostc$Type* $tmp172 = $tmp170($tmp169);
frost$core$Bit $tmp173 = org$frostlang$frostc$Type$get_isBuiltinNumber$R$frost$core$Bit($tmp172);
bool $tmp174 = $tmp173.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp172));
if ($tmp174) goto block26; else goto block27;
block26:;
// line 94
org$frostlang$frostc$IR* $tmp175 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp176 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp177 = (frost$core$Int64) {16};
org$frostlang$frostc$IR$Value* $tmp178 = *(&local8);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp176, $tmp177, param1, $tmp178);
$fn180 $tmp179 = ($fn180) $tmp175->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp181 = $tmp179($tmp175, $tmp176);
*(&local9) = $tmp181;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp176));
// line 95
org$frostlang$frostc$IR$Value* $tmp182 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp183 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp184 = *(&local9);
org$frostlang$frostc$IR$Value* $tmp185 = *(&local8);
$fn187 $tmp186 = ($fn187) $tmp185->$class->vtable[2];
org$frostlang$frostc$Type* $tmp188 = $tmp186($tmp185);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp182, $tmp183, $tmp184, $tmp188);
org$frostlang$frostc$IR$Value* $tmp189 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp182, param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp189));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp189));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp188));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp182));
org$frostlang$frostc$IR$Value* $tmp190 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp190));
*(&local8) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp191 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp191));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return $tmp189;
block27:;
// line 97
org$frostlang$frostc$IR$Value* $tmp192 = *(&local8);
frost$collections$Array* $tmp193 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp194 = (frost$core$Int64) {0};
frost$collections$Array$init$frost$core$Int64($tmp193, $tmp194);
org$frostlang$frostc$IR$Value* $tmp195 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp192, &$s196, ((frost$collections$ListView*) $tmp193), param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp195));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp195));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp193));
org$frostlang$frostc$IR$Value* $tmp197 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp197));
*(&local8) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp198 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp198));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return $tmp195;
block1:;
// line 100
frost$core$Int64 $tmp199 = (frost$core$Int64) {100};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s200, $tmp199);
abort(); // unreachable

}
void org$frostlang$frostc$expression$Unary$init(org$frostlang$frostc$expression$Unary* param0) {

return;

}
void org$frostlang$frostc$expression$Unary$cleanup(org$frostlang$frostc$expression$Unary* param0) {

// line 16
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}

