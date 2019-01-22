#include "org/frostlang/frostc/statement/If.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/Compiler.h"
#include "org/frostlang/frostc/Position.h"
#include "org/frostlang/frostc/ASTNode.h"
#include "org/frostlang/frostc/FixedArray.h"
#include "org/frostlang/frostc/IR.h"
#include "org/frostlang/frostc/IR/Value.h"
#include "org/frostlang/frostc/IR/Block/ID.h"
#include "org/frostlang/frostc/Compiler/AutoUnrefs.h"
#include "org/frostlang/frostc/Compiler/AutoScope.h"
#include "frost/core/Frost.h"
#include "org/frostlang/frostc/Compiler/TypeContext.h"
#include "frost/core/Int64.h"
#include "org/frostlang/frostc/Type.h"
#include "frost/core/Bit.h"
#include "org/frostlang/frostc/IR/Statement.h"
#include "org/frostlang/frostc/IR/Statement/ID.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/Iterator.h"


static frost$core$String $s1;
org$frostlang$frostc$statement$If$class_type org$frostlang$frostc$statement$If$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$statement$If$cleanup} };

typedef org$frostlang$frostc$IR$Block$ID (*$fn7)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn12)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn34)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn50)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn55)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef frost$collections$Iterator* (*$fn60)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn64)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn69)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn77)(org$frostlang$frostc$IR*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn86)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn93)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef frost$core$Bit (*$fn96)(org$frostlang$frostc$IR*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn105)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn110)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x73\x74\x61\x74\x65\x6d\x65\x6e\x74\x2e\x49\x66", 33, 7038380079964923138, NULL };
static frost$core$String $s9 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x66\x20\x74\x72\x75\x65", 7, 219748631897488, NULL };
static frost$core$String $s14 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x66\x20\x65\x6e\x64", 6, 2175728875251, NULL };
static frost$core$String $s36 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x66\x20\x66\x61\x6c\x73\x65", 8, 22194610347195263, NULL };

void org$frostlang$frostc$statement$If$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, org$frostlang$frostc$ASTNode* param2, org$frostlang$frostc$FixedArray* param3, org$frostlang$frostc$ASTNode* param4) {

org$frostlang$frostc$IR* local0 = NULL;
org$frostlang$frostc$IR$Value* local1 = NULL;
org$frostlang$frostc$IR$Block$ID local2;
org$frostlang$frostc$IR$Block$ID local3;
org$frostlang$frostc$IR$Block$ID local4;
org$frostlang$frostc$Compiler$AutoUnrefs* local5 = NULL;
org$frostlang$frostc$IR$Value* local6 = NULL;
org$frostlang$frostc$Compiler$AutoScope* local7 = NULL;
org$frostlang$frostc$ASTNode* local8 = NULL;
// line 17
org$frostlang$frostc$IR** $tmp2 = &param0->ir;
org$frostlang$frostc$IR* $tmp3 = *$tmp2;
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3));
org$frostlang$frostc$IR* $tmp4 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4));
*(&local0) = $tmp3;
// line 18
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
// line 19
org$frostlang$frostc$IR* $tmp5 = *(&local0);
$fn7 $tmp6 = ($fn7) $tmp5->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp8 = $tmp6($tmp5, &$s9);
*(&local2) = $tmp8;
// line 20
// line 21
org$frostlang$frostc$IR* $tmp10 = *(&local0);
$fn12 $tmp11 = ($fn12) $tmp10->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp13 = $tmp11($tmp10, &$s14);
*(&local4) = $tmp13;
// line 1
// line 23
org$frostlang$frostc$Compiler$AutoUnrefs* $tmp15 = (org$frostlang$frostc$Compiler$AutoUnrefs*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoUnrefs$class);
org$frostlang$frostc$Compiler$AutoUnrefs$init$org$frostlang$frostc$Compiler($tmp15, param0);
*(&local5) = ((org$frostlang$frostc$Compiler$AutoUnrefs*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp15));
org$frostlang$frostc$Compiler$AutoUnrefs* $tmp16 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp16));
*(&local5) = $tmp15;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp15));
// line 24
org$frostlang$frostc$Compiler$TypeContext* $tmp17 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(33, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp18 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp19 = org$frostlang$frostc$Type$Bit$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp20 = frost$core$Bit$init$builtin_bit(false);
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp17, $tmp18, $tmp19, $tmp20);
org$frostlang$frostc$IR$Value* $tmp21 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param2, $tmp17);
*(&local6) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp21));
org$frostlang$frostc$IR$Value* $tmp22 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp22));
*(&local6) = $tmp21;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp21));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp19));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp17));
// line 26
org$frostlang$frostc$IR$Value* $tmp23 = *(&local6);
frost$core$Bit $tmp24 = frost$core$Bit$init$builtin_bit($tmp23 == NULL);
bool $tmp25 = $tmp24.value;
if ($tmp25) goto block1; else goto block2;
block1:;
// line 27
org$frostlang$frostc$IR$Value* $tmp26 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp26));
*(&local6) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Compiler$AutoUnrefs* $tmp27 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp27));
*(&local5) = ((org$frostlang$frostc$Compiler$AutoUnrefs*) NULL);
org$frostlang$frostc$IR$Value* $tmp28 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp28));
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp29 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp29));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block2:;
// line 29
frost$core$Bit $tmp30 = frost$core$Bit$init$builtin_bit(param4 != NULL);
bool $tmp31 = $tmp30.value;
if ($tmp31) goto block3; else goto block5;
block3:;
// line 30
org$frostlang$frostc$IR* $tmp32 = *(&local0);
$fn34 $tmp33 = ($fn34) $tmp32->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp35 = $tmp33($tmp32, &$s36);
*(&local3) = $tmp35;
goto block4;
block5:;
// line 1
// line 33
org$frostlang$frostc$IR$Block$ID $tmp37 = *(&local4);
*(&local3) = $tmp37;
goto block4;
block4:;
// line 35
org$frostlang$frostc$IR$Value* $tmp38 = *(&local6);
org$frostlang$frostc$IR$Value* $tmp39 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp38);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp39));
org$frostlang$frostc$IR$Value* $tmp40 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp40));
*(&local1) = $tmp39;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp39));
org$frostlang$frostc$IR$Value* $tmp41 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp41));
*(&local6) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Compiler$AutoUnrefs* $tmp42 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp42));
*(&local5) = ((org$frostlang$frostc$Compiler$AutoUnrefs*) NULL);
// line 37
org$frostlang$frostc$IR* $tmp43 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp44 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp45 = (frost$core$Int64) {5};
org$frostlang$frostc$IR$Value* $tmp46 = *(&local1);
org$frostlang$frostc$IR$Block$ID $tmp47 = *(&local2);
org$frostlang$frostc$IR$Block$ID $tmp48 = *(&local3);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp44, $tmp45, param1, $tmp46, $tmp47, $tmp48);
$fn50 $tmp49 = ($fn50) $tmp43->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp51 = $tmp49($tmp43, $tmp44);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp44));
// line 38
org$frostlang$frostc$IR* $tmp52 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp53 = *(&local2);
$fn55 $tmp54 = ($fn55) $tmp52->$class->vtable[4];
$tmp54($tmp52, $tmp53);
// line 1
// line 40
org$frostlang$frostc$Compiler$AutoScope* $tmp56 = (org$frostlang$frostc$Compiler$AutoScope*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoScope$class);
org$frostlang$frostc$Compiler$AutoScope$init$org$frostlang$frostc$Compiler($tmp56, param0);
*(&local7) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp56));
org$frostlang$frostc$Compiler$AutoScope* $tmp57 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp57));
*(&local7) = $tmp56;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp56));
// line 41
ITable* $tmp58 = ((frost$collections$Iterable*) param3)->$class->itable;
while ($tmp58->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp58 = $tmp58->next;
}
$fn60 $tmp59 = $tmp58->methods[0];
frost$collections$Iterator* $tmp61 = $tmp59(((frost$collections$Iterable*) param3));
goto block6;
block6:;
ITable* $tmp62 = $tmp61->$class->itable;
while ($tmp62->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp62 = $tmp62->next;
}
$fn64 $tmp63 = $tmp62->methods[0];
frost$core$Bit $tmp65 = $tmp63($tmp61);
bool $tmp66 = $tmp65.value;
if ($tmp66) goto block8; else goto block7;
block7:;
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp67 = $tmp61->$class->itable;
while ($tmp67->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp67 = $tmp67->next;
}
$fn69 $tmp68 = $tmp67->methods[1];
frost$core$Object* $tmp70 = $tmp68($tmp61);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp70)));
org$frostlang$frostc$ASTNode* $tmp71 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp71));
*(&local8) = ((org$frostlang$frostc$ASTNode*) $tmp70);
// line 42
org$frostlang$frostc$ASTNode* $tmp72 = *(&local8);
org$frostlang$frostc$Compiler$compileStatement$org$frostlang$frostc$ASTNode(param0, $tmp72);
frost$core$Frost$unref$frost$core$Object$Q($tmp70);
org$frostlang$frostc$ASTNode* $tmp73 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp73));
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block6;
block8:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp61));
org$frostlang$frostc$Compiler$AutoScope* $tmp74 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp74));
*(&local7) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
// line 45
org$frostlang$frostc$IR* $tmp75 = *(&local0);
$fn77 $tmp76 = ($fn77) $tmp75->$class->vtable[5];
frost$core$Bit $tmp78 = $tmp76($tmp75);
frost$core$Bit $tmp79 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp78);
bool $tmp80 = $tmp79.value;
if ($tmp80) goto block9; else goto block10;
block9:;
// line 46
org$frostlang$frostc$IR* $tmp81 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp82 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp83 = (frost$core$Int64) {1};
org$frostlang$frostc$IR$Block$ID $tmp84 = *(&local4);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Block$ID($tmp82, $tmp83, param1, $tmp84);
$fn86 $tmp85 = ($fn86) $tmp81->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp87 = $tmp85($tmp81, $tmp82);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp82));
goto block10;
block10:;
// line 48
frost$core$Bit $tmp88 = frost$core$Bit$init$builtin_bit(param4 != NULL);
bool $tmp89 = $tmp88.value;
if ($tmp89) goto block11; else goto block12;
block11:;
// line 49
org$frostlang$frostc$IR* $tmp90 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp91 = *(&local3);
$fn93 $tmp92 = ($fn93) $tmp90->$class->vtable[4];
$tmp92($tmp90, $tmp91);
// line 50
org$frostlang$frostc$Compiler$compileStatement$org$frostlang$frostc$ASTNode(param0, param4);
// line 51
org$frostlang$frostc$IR* $tmp94 = *(&local0);
$fn96 $tmp95 = ($fn96) $tmp94->$class->vtable[5];
frost$core$Bit $tmp97 = $tmp95($tmp94);
frost$core$Bit $tmp98 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp97);
bool $tmp99 = $tmp98.value;
if ($tmp99) goto block13; else goto block14;
block13:;
// line 52
org$frostlang$frostc$IR* $tmp100 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp101 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp102 = (frost$core$Int64) {1};
org$frostlang$frostc$IR$Block$ID $tmp103 = *(&local4);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Block$ID($tmp101, $tmp102, param1, $tmp103);
$fn105 $tmp104 = ($fn105) $tmp100->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp106 = $tmp104($tmp100, $tmp101);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp101));
goto block14;
block14:;
goto block12;
block12:;
// line 55
org$frostlang$frostc$IR* $tmp107 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp108 = *(&local4);
$fn110 $tmp109 = ($fn110) $tmp107->$class->vtable[4];
$tmp109($tmp107, $tmp108);
org$frostlang$frostc$IR$Value* $tmp111 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp111));
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp112 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp112));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;

}
void org$frostlang$frostc$statement$If$init(org$frostlang$frostc$statement$If* param0) {

return;

}
void org$frostlang$frostc$statement$If$cleanup(org$frostlang$frostc$statement$If* param0) {

// line 13
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}






