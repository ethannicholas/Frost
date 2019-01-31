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
#include "org/frostlang/frostc/Compiler/AutoScope.h"
#include "frost/core/Frost.h"
#include "frost/core/Bit.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/Iterator.h"
#include "org/frostlang/frostc/IR/Statement.h"
#include "frost/core/Int64.h"
#include "org/frostlang/frostc/IR/Statement/ID.h"


static frost$core$String $s1;
org$frostlang$frostc$statement$If$class_type org$frostlang$frostc$statement$If$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$statement$If$cleanup} };

typedef org$frostlang$frostc$IR$Block$ID (*$fn7)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn12)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn19)(org$frostlang$frostc$IR*, frost$core$String*);
typedef void (*$fn28)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef frost$collections$Iterator* (*$fn33)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn37)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn42)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn50)(org$frostlang$frostc$IR*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn59)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn66)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef frost$core$Bit (*$fn69)(org$frostlang$frostc$IR*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn78)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn83)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x73\x74\x61\x74\x65\x6d\x65\x6e\x74\x2e\x49\x66", 33, 7038380079964923138, NULL };
static frost$core$String $s9 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x66\x20\x74\x72\x75\x65", 7, 219748631897488, NULL };
static frost$core$String $s14 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x66\x20\x65\x6e\x64", 6, 2175728875251, NULL };
static frost$core$String $s21 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x66\x20\x66\x61\x6c\x73\x65", 8, 22194610347195263, NULL };

void org$frostlang$frostc$statement$If$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, org$frostlang$frostc$ASTNode* param2, org$frostlang$frostc$FixedArray* param3, org$frostlang$frostc$ASTNode* param4) {

org$frostlang$frostc$IR* local0 = NULL;
org$frostlang$frostc$IR$Value* local1 = NULL;
org$frostlang$frostc$IR$Block$ID local2;
org$frostlang$frostc$IR$Block$ID local3;
org$frostlang$frostc$IR$Block$ID local4;
org$frostlang$frostc$Compiler$AutoScope* local5 = NULL;
org$frostlang$frostc$ASTNode* local6 = NULL;
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
org$frostlang$frostc$IR* $tmp10 = *(&local0);
$fn12 $tmp11 = ($fn12) $tmp10->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp13 = $tmp11($tmp10, &$s14);
*(&local3) = $tmp13;
// line 21
// line 22
frost$core$Bit $tmp15 = frost$core$Bit$init$builtin_bit(param4 != NULL);
bool $tmp16 = $tmp15.value;
if ($tmp16) goto block1; else goto block3;
block1:;
// line 23
org$frostlang$frostc$IR* $tmp17 = *(&local0);
$fn19 $tmp18 = ($fn19) $tmp17->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp20 = $tmp18($tmp17, &$s21);
*(&local4) = $tmp20;
goto block2;
block3:;
// line 1
// line 26
org$frostlang$frostc$IR$Block$ID $tmp22 = *(&local3);
*(&local4) = $tmp22;
goto block2;
block2:;
// line 28
org$frostlang$frostc$IR$Block$ID $tmp23 = *(&local2);
org$frostlang$frostc$IR$Block$ID $tmp24 = *(&local4);
org$frostlang$frostc$Compiler$compileConditionalBranch$org$frostlang$frostc$ASTNode$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID(param0, param2, $tmp23, $tmp24);
// line 29
org$frostlang$frostc$IR* $tmp25 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp26 = *(&local2);
$fn28 $tmp27 = ($fn28) $tmp25->$class->vtable[4];
$tmp27($tmp25, $tmp26);
// line 1
// line 31
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$AutoScope));
org$frostlang$frostc$Compiler$AutoScope* $tmp29 = (org$frostlang$frostc$Compiler$AutoScope*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoScope$class);
org$frostlang$frostc$Compiler$AutoScope$init$org$frostlang$frostc$Compiler($tmp29, param0);
*(&local5) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp29));
org$frostlang$frostc$Compiler$AutoScope* $tmp30 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp30));
*(&local5) = $tmp29;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp29));
// line 32
ITable* $tmp31 = ((frost$collections$Iterable*) param3)->$class->itable;
while ($tmp31->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp31 = $tmp31->next;
}
$fn33 $tmp32 = $tmp31->methods[0];
frost$collections$Iterator* $tmp34 = $tmp32(((frost$collections$Iterable*) param3));
goto block4;
block4:;
ITable* $tmp35 = $tmp34->$class->itable;
while ($tmp35->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp35 = $tmp35->next;
}
$fn37 $tmp36 = $tmp35->methods[0];
frost$core$Bit $tmp38 = $tmp36($tmp34);
bool $tmp39 = $tmp38.value;
if ($tmp39) goto block6; else goto block5;
block5:;
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp40 = $tmp34->$class->itable;
while ($tmp40->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp40 = $tmp40->next;
}
$fn42 $tmp41 = $tmp40->methods[1];
frost$core$Object* $tmp43 = $tmp41($tmp34);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp43)));
org$frostlang$frostc$ASTNode* $tmp44 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp44));
*(&local6) = ((org$frostlang$frostc$ASTNode*) $tmp43);
// line 33
org$frostlang$frostc$ASTNode* $tmp45 = *(&local6);
org$frostlang$frostc$Compiler$compileStatement$org$frostlang$frostc$ASTNode(param0, $tmp45);
frost$core$Frost$unref$frost$core$Object$Q($tmp43);
org$frostlang$frostc$ASTNode* $tmp46 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp46));
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block4;
block6:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp34));
org$frostlang$frostc$Compiler$AutoScope* $tmp47 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp47));
*(&local5) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
// line 36
org$frostlang$frostc$IR* $tmp48 = *(&local0);
$fn50 $tmp49 = ($fn50) $tmp48->$class->vtable[5];
frost$core$Bit $tmp51 = $tmp49($tmp48);
frost$core$Bit $tmp52 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp51);
bool $tmp53 = $tmp52.value;
if ($tmp53) goto block7; else goto block8;
block7:;
// line 37
org$frostlang$frostc$IR* $tmp54 = *(&local0);
FROST_ASSERT(72 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp55 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp56 = (frost$core$Int64) {1};
org$frostlang$frostc$IR$Block$ID $tmp57 = *(&local3);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Block$ID($tmp55, $tmp56, param1, $tmp57);
$fn59 $tmp58 = ($fn59) $tmp54->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp60 = $tmp58($tmp54, $tmp55);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp55));
goto block8;
block8:;
// line 39
frost$core$Bit $tmp61 = frost$core$Bit$init$builtin_bit(param4 != NULL);
bool $tmp62 = $tmp61.value;
if ($tmp62) goto block9; else goto block10;
block9:;
// line 40
org$frostlang$frostc$IR* $tmp63 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp64 = *(&local4);
$fn66 $tmp65 = ($fn66) $tmp63->$class->vtable[4];
$tmp65($tmp63, $tmp64);
// line 41
org$frostlang$frostc$Compiler$compileStatement$org$frostlang$frostc$ASTNode(param0, param4);
// line 42
org$frostlang$frostc$IR* $tmp67 = *(&local0);
$fn69 $tmp68 = ($fn69) $tmp67->$class->vtable[5];
frost$core$Bit $tmp70 = $tmp68($tmp67);
frost$core$Bit $tmp71 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp70);
bool $tmp72 = $tmp71.value;
if ($tmp72) goto block11; else goto block12;
block11:;
// line 43
org$frostlang$frostc$IR* $tmp73 = *(&local0);
FROST_ASSERT(72 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp74 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp75 = (frost$core$Int64) {1};
org$frostlang$frostc$IR$Block$ID $tmp76 = *(&local3);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Block$ID($tmp74, $tmp75, param1, $tmp76);
$fn78 $tmp77 = ($fn78) $tmp73->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp79 = $tmp77($tmp73, $tmp74);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp74));
goto block12;
block12:;
goto block10;
block10:;
// line 46
org$frostlang$frostc$IR* $tmp80 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp81 = *(&local3);
$fn83 $tmp82 = ($fn83) $tmp80->$class->vtable[4];
$tmp82($tmp80, $tmp81);
org$frostlang$frostc$IR$Value* $tmp84 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp84));
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp85 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp85));
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






