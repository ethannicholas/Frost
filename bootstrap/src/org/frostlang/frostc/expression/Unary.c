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
#include "org/frostlang/frostc/IR/Statement/ID.h"
#include "frost/core/Frost.h"
#include "frost/core/Int64.h"
#include "frost/core/Bit.h"
#include "org/frostlang/frostc/expression/IntLiteral.h"
#include "org/frostlang/frostc/Type.h"
#include "org/frostlang/frostc/IR/Statement.h"
#include "frost/collections/Array.h"
#include "frost/collections/ListView.h"
#include "org/frostlang/frostc/expression/Call.h"


static frost$core$String $s1;
org$frostlang$frostc$expression$Unary$class_type org$frostlang$frostc$expression$Unary$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$expression$Unary$cleanup} };

typedef org$frostlang$frostc$Type* (*$fn32)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn41)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$Type* (*$fn48)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$Type* (*$fn74)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn84)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$Type* (*$fn114)(org$frostlang$frostc$IR$Value*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn123)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$Type* (*$fn130)(org$frostlang$frostc$IR$Value*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2e\x55\x6e\x61\x72\x79", 37, 3193902451946592297, NULL };
static frost$core$String $s57 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d", 1, 146, NULL };
static frost$core$String $s97 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x21", 1, 134, NULL };
static frost$core$String $s139 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x21\x21", 2, 13567, NULL };
static frost$core$String $s143 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x55\x6e\x61\x72\x79\x2e\x66\x72\x6f\x73\x74", 11, 6986272374594638012, NULL };

org$frostlang$frostc$IR$Value* org$frostlang$frostc$expression$Unary$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$expression$Unary$Operator$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, org$frostlang$frostc$expression$Unary$Operator param2, org$frostlang$frostc$ASTNode* param3, org$frostlang$frostc$Compiler$TypeContext* param4) {

org$frostlang$frostc$IR* local0 = NULL;
frost$core$UInt64 local1;
org$frostlang$frostc$IR$Value* local2 = NULL;
org$frostlang$frostc$IR$Statement$ID local3;
org$frostlang$frostc$IR$Value* local4 = NULL;
org$frostlang$frostc$IR$Statement$ID local5;
org$frostlang$frostc$IR$Value* local6 = NULL;
org$frostlang$frostc$IR$Statement$ID local7;
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
frost$core$UInt64 $tmp18 = *(&local1);
org$frostlang$frostc$IR$Value* $tmp19 = org$frostlang$frostc$expression$IntLiteral$compileNegated$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$frost$core$UInt64$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp18, param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp19));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp19));
org$frostlang$frostc$IR* $tmp20 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp20));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return $tmp19;
block4:;
// line 55
org$frostlang$frostc$Compiler$TypeContext* $tmp21 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(33, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp22 = (frost$core$Int64) {1};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp21, $tmp22);
org$frostlang$frostc$IR$Value* $tmp23 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param3, $tmp21);
*(&local2) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp23));
org$frostlang$frostc$IR$Value* $tmp24 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp24));
*(&local2) = $tmp23;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp23));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp21));
// line 56
org$frostlang$frostc$IR$Value* $tmp25 = *(&local2);
frost$core$Bit $tmp26 = frost$core$Bit$init$builtin_bit($tmp25 == NULL);
bool $tmp27 = $tmp26.value;
if ($tmp27) goto block6; else goto block7;
block6:;
// line 57
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$IR$Value* $tmp28 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp28));
*(&local2) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp29 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp29));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block7:;
// line 59
org$frostlang$frostc$IR$Value* $tmp30 = *(&local2);
$fn32 $tmp31 = ($fn32) $tmp30->$class->vtable[2];
org$frostlang$frostc$Type* $tmp33 = $tmp31($tmp30);
frost$core$Bit $tmp34 = org$frostlang$frostc$Type$get_isBuiltinNumber$R$frost$core$Bit($tmp33);
bool $tmp35 = $tmp34.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp33));
if ($tmp35) goto block8; else goto block9;
block8:;
// line 60
org$frostlang$frostc$IR* $tmp36 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp37 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp38 = (frost$core$Int64) {15};
org$frostlang$frostc$IR$Value* $tmp39 = *(&local2);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp37, $tmp38, param1, $tmp39);
$fn41 $tmp40 = ($fn41) $tmp36->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp42 = $tmp40($tmp36, $tmp37);
*(&local3) = $tmp42;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp37));
// line 61
org$frostlang$frostc$IR$Value* $tmp43 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp44 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp45 = *(&local3);
org$frostlang$frostc$IR$Value* $tmp46 = *(&local2);
$fn48 $tmp47 = ($fn48) $tmp46->$class->vtable[2];
org$frostlang$frostc$Type* $tmp49 = $tmp47($tmp46);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp43, $tmp44, $tmp45, $tmp49);
org$frostlang$frostc$IR$Value* $tmp50 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp43, param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp50));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp50));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp49));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp43));
org$frostlang$frostc$IR$Value* $tmp51 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp51));
*(&local2) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp52 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp52));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return $tmp50;
block9:;
// line 63
org$frostlang$frostc$IR$Value* $tmp53 = *(&local2);
frost$collections$Array* $tmp54 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp55 = (frost$core$Int64) {0};
frost$collections$Array$init$frost$core$Int64($tmp54, $tmp55);
org$frostlang$frostc$IR$Value* $tmp56 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp53, &$s57, ((frost$collections$ListView*) $tmp54), param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp56));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp56));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp54));
org$frostlang$frostc$IR$Value* $tmp58 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp58));
*(&local2) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp59 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp59));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return $tmp56;
block3:;
frost$core$Int64 $tmp60 = (frost$core$Int64) {0};
frost$core$Bit $tmp61 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5, $tmp60);
bool $tmp62 = $tmp61.value;
if ($tmp62) goto block10; else goto block11;
block10:;
// line 66
org$frostlang$frostc$Compiler$TypeContext* $tmp63 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(33, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp64 = (frost$core$Int64) {1};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp63, $tmp64);
org$frostlang$frostc$IR$Value* $tmp65 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param3, $tmp63);
*(&local4) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp65));
org$frostlang$frostc$IR$Value* $tmp66 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp66));
*(&local4) = $tmp65;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp65));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp63));
// line 67
org$frostlang$frostc$IR$Value* $tmp67 = *(&local4);
frost$core$Bit $tmp68 = frost$core$Bit$init$builtin_bit($tmp67 == NULL);
bool $tmp69 = $tmp68.value;
if ($tmp69) goto block12; else goto block13;
block12:;
// line 68
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$IR$Value* $tmp70 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp70));
*(&local4) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp71 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp71));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block13:;
// line 70
org$frostlang$frostc$IR$Value* $tmp72 = *(&local4);
$fn74 $tmp73 = ($fn74) $tmp72->$class->vtable[2];
org$frostlang$frostc$Type* $tmp75 = $tmp73($tmp72);
org$frostlang$frostc$Type* $tmp76 = org$frostlang$frostc$Type$BuiltinBit$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp77 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit($tmp75, $tmp76);
bool $tmp78 = $tmp77.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp76));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp75));
if ($tmp78) goto block14; else goto block15;
block14:;
// line 71
org$frostlang$frostc$IR* $tmp79 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp80 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp81 = (frost$core$Int64) {16};
org$frostlang$frostc$IR$Value* $tmp82 = *(&local4);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp80, $tmp81, param1, $tmp82);
$fn84 $tmp83 = ($fn84) $tmp79->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp85 = $tmp83($tmp79, $tmp80);
*(&local5) = $tmp85;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp80));
// line 72
org$frostlang$frostc$IR$Value* $tmp86 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp87 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp88 = *(&local5);
org$frostlang$frostc$Type* $tmp89 = org$frostlang$frostc$Type$BuiltinBit$R$org$frostlang$frostc$Type();
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp86, $tmp87, $tmp88, $tmp89);
org$frostlang$frostc$IR$Value* $tmp90 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp86, param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp90));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp90));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp89));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp86));
org$frostlang$frostc$IR$Value* $tmp91 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp91));
*(&local4) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp92 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp92));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return $tmp90;
block15:;
// line 74
org$frostlang$frostc$IR$Value* $tmp93 = *(&local4);
frost$collections$Array* $tmp94 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp95 = (frost$core$Int64) {0};
frost$collections$Array$init$frost$core$Int64($tmp94, $tmp95);
org$frostlang$frostc$IR$Value* $tmp96 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp93, &$s97, ((frost$collections$ListView*) $tmp94), param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp96));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp96));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp94));
org$frostlang$frostc$IR$Value* $tmp98 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp98));
*(&local4) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp99 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp99));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return $tmp96;
block11:;
frost$core$Int64 $tmp100 = (frost$core$Int64) {1};
frost$core$Bit $tmp101 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp5, $tmp100);
bool $tmp102 = $tmp101.value;
if ($tmp102) goto block16; else goto block1;
block16:;
// line 77
org$frostlang$frostc$Compiler$TypeContext* $tmp103 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(33, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp104 = (frost$core$Int64) {1};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp103, $tmp104);
org$frostlang$frostc$IR$Value* $tmp105 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param3, $tmp103);
*(&local6) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp105));
org$frostlang$frostc$IR$Value* $tmp106 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp106));
*(&local6) = $tmp105;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp105));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp103));
// line 78
org$frostlang$frostc$IR$Value* $tmp107 = *(&local6);
frost$core$Bit $tmp108 = frost$core$Bit$init$builtin_bit($tmp107 == NULL);
bool $tmp109 = $tmp108.value;
if ($tmp109) goto block17; else goto block18;
block17:;
// line 79
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$IR$Value* $tmp110 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp110));
*(&local6) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp111 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp111));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block18:;
// line 81
org$frostlang$frostc$IR$Value* $tmp112 = *(&local6);
$fn114 $tmp113 = ($fn114) $tmp112->$class->vtable[2];
org$frostlang$frostc$Type* $tmp115 = $tmp113($tmp112);
frost$core$Bit $tmp116 = org$frostlang$frostc$Type$get_isBuiltinNumber$R$frost$core$Bit($tmp115);
bool $tmp117 = $tmp116.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp115));
if ($tmp117) goto block19; else goto block20;
block19:;
// line 82
org$frostlang$frostc$IR* $tmp118 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp119 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp120 = (frost$core$Int64) {16};
org$frostlang$frostc$IR$Value* $tmp121 = *(&local6);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value($tmp119, $tmp120, param1, $tmp121);
$fn123 $tmp122 = ($fn123) $tmp118->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp124 = $tmp122($tmp118, $tmp119);
*(&local7) = $tmp124;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp119));
// line 83
org$frostlang$frostc$IR$Value* $tmp125 = (org$frostlang$frostc$IR$Value*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$IR$Value$class);
frost$core$Int64 $tmp126 = (frost$core$Int64) {7};
org$frostlang$frostc$IR$Statement$ID $tmp127 = *(&local7);
org$frostlang$frostc$IR$Value* $tmp128 = *(&local6);
$fn130 $tmp129 = ($fn130) $tmp128->$class->vtable[2];
org$frostlang$frostc$Type* $tmp131 = $tmp129($tmp128);
org$frostlang$frostc$IR$Value$init$frost$core$Int64$org$frostlang$frostc$IR$Statement$ID$org$frostlang$frostc$Type($tmp125, $tmp126, $tmp127, $tmp131);
org$frostlang$frostc$IR$Value* $tmp132 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp125, param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp132));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp132));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp131));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp125));
org$frostlang$frostc$IR$Value* $tmp133 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp133));
*(&local6) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp134 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp134));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return $tmp132;
block20:;
// line 85
org$frostlang$frostc$IR$Value* $tmp135 = *(&local6);
frost$collections$Array* $tmp136 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$core$Int64 $tmp137 = (frost$core$Int64) {0};
frost$collections$Array$init$frost$core$Int64($tmp136, $tmp137);
org$frostlang$frostc$IR$Value* $tmp138 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$String$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp135, &$s139, ((frost$collections$ListView*) $tmp136), param4);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp138));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp138));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp136));
org$frostlang$frostc$IR$Value* $tmp140 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp140));
*(&local6) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp141 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp141));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return $tmp138;
block1:;
// line 88
frost$core$Int64 $tmp142 = (frost$core$Int64) {88};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s143, $tmp142);
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

