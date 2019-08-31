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
#include "frost/core/Int.h"
#include "org/frostlang/frostc/IR/Statement/ID.h"


static frost$core$String $s1;
org$frostlang$frostc$statement$If$class_type org$frostlang$frostc$statement$If$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$statement$If$cleanup} };

typedef org$frostlang$frostc$IR$Block$ID (*$fn7)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn12)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn19)(org$frostlang$frostc$IR*, frost$core$String*);
typedef void (*$fn28)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef frost$collections$Iterator* (*$fn33)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn37)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn42)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn50)(org$frostlang$frostc$IR*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn61)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn68)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef frost$core$Bit (*$fn76)(org$frostlang$frostc$IR*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn87)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn92)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x73\x74\x61\x74\x65\x6d\x65\x6e\x74\x2e\x49\x66", 33, -6167115790057972022, NULL };
static frost$core$String $s9 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x69\x66\x20\x74\x72\x75\x65", 7, 8109127451288362590, NULL };
static frost$core$String $s14 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x69\x66\x20\x65\x6e\x64", 6, 3467118246808131167, NULL };
static frost$core$String $s21 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x69\x66\x20\x66\x61\x6c\x73\x65", 8, -7063678156154507783, NULL };
static frost$core$String $s72 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x66\x2e\x66\x72\x6f\x73\x74", 8, -8891973059455874766, NULL };
static frost$core$String $s73 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65", 95, 7721999553369549811, NULL };

void org$frostlang$frostc$statement$If$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, org$frostlang$frostc$ASTNode* param2, org$frostlang$frostc$FixedArray* param3, org$frostlang$frostc$ASTNode* param4) {

org$frostlang$frostc$IR* local0 = NULL;
org$frostlang$frostc$IR$Value* local1 = NULL;
org$frostlang$frostc$IR$Block$ID local2;
org$frostlang$frostc$IR$Block$ID local3;
org$frostlang$frostc$IR$Block$ID local4;
org$frostlang$frostc$Compiler$AutoScope* local5 = NULL;
org$frostlang$frostc$ASTNode* local6 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/If.frost:17
org$frostlang$frostc$IR** $tmp2 = &param0->ir;
org$frostlang$frostc$IR* $tmp3 = *$tmp2;
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3));
org$frostlang$frostc$IR* $tmp4 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4));
*(&local0) = $tmp3;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/If.frost:18
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/If.frost:19
org$frostlang$frostc$IR* $tmp5 = *(&local0);
$fn7 $tmp6 = ($fn7) $tmp5->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp8 = $tmp6($tmp5, &$s9);
*(&local2) = $tmp8;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/If.frost:20
org$frostlang$frostc$IR* $tmp10 = *(&local0);
$fn12 $tmp11 = ($fn12) $tmp10->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp13 = $tmp11($tmp10, &$s14);
*(&local3) = $tmp13;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/If.frost:21
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/If.frost:22
frost$core$Bit $tmp15 = (frost$core$Bit) {param4 != NULL};
bool $tmp16 = $tmp15.value;
if ($tmp16) goto block1; else goto block3;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/If.frost:23
org$frostlang$frostc$IR* $tmp17 = *(&local0);
$fn19 $tmp18 = ($fn19) $tmp17->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp20 = $tmp18($tmp17, &$s21);
*(&local4) = $tmp20;
goto block2;
block3:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/If.frost:26
org$frostlang$frostc$IR$Block$ID $tmp22 = *(&local3);
*(&local4) = $tmp22;
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/If.frost:28
org$frostlang$frostc$IR$Block$ID $tmp23 = *(&local2);
org$frostlang$frostc$IR$Block$ID $tmp24 = *(&local4);
org$frostlang$frostc$Compiler$compileConditionalBranch$org$frostlang$frostc$ASTNode$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID(param0, param2, $tmp23, $tmp24);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/If.frost:29
org$frostlang$frostc$IR* $tmp25 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp26 = *(&local2);
$fn28 $tmp27 = ($fn28) $tmp25->$class->vtable[4];
$tmp27($tmp25, $tmp26);
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/If.frost:31
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$AutoScope));
org$frostlang$frostc$Compiler$AutoScope* $tmp29 = (org$frostlang$frostc$Compiler$AutoScope*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoScope$class);
org$frostlang$frostc$Compiler$AutoScope$init$org$frostlang$frostc$Compiler($tmp29, param0);
*(&local5) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp29));
org$frostlang$frostc$Compiler$AutoScope* $tmp30 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp30));
*(&local5) = $tmp29;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp29));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/If.frost:32
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/If.frost:33
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/If.frost:36
org$frostlang$frostc$IR* $tmp48 = *(&local0);
$fn50 $tmp49 = ($fn50) $tmp48->$class->vtable[5];
frost$core$Bit $tmp51 = $tmp49($tmp48);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from If.frost:36:12
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp52 = $tmp51.value;
bool $tmp53 = !$tmp52;
frost$core$Bit $tmp54 = (frost$core$Bit) {$tmp53};
bool $tmp55 = $tmp54.value;
if ($tmp55) goto block7; else goto block8;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/If.frost:37
org$frostlang$frostc$IR* $tmp56 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp57 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp58 = (frost$core$Int) {1u};
org$frostlang$frostc$IR$Block$ID $tmp59 = *(&local3);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Block$ID($tmp57, $tmp58, param1, $tmp59);
$fn61 $tmp60 = ($fn61) $tmp56->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp62 = $tmp60($tmp56, $tmp57);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp57));
goto block8;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/If.frost:39
frost$core$Bit $tmp63 = (frost$core$Bit) {param4 != NULL};
bool $tmp64 = $tmp63.value;
if ($tmp64) goto block10; else goto block11;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/If.frost:40
org$frostlang$frostc$IR* $tmp65 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp66 = *(&local4);
$fn68 $tmp67 = ($fn68) $tmp65->$class->vtable[4];
$tmp67($tmp65, $tmp66);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/If.frost:41
frost$core$Bit $tmp69 = (frost$core$Bit) {param4 != NULL};
bool $tmp70 = $tmp69.value;
if ($tmp70) goto block12; else goto block13;
block13:;
frost$core$Int $tmp71 = (frost$core$Int) {41u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s72, $tmp71, &$s73);
abort(); // unreachable
block12:;
org$frostlang$frostc$Compiler$compileStatement$org$frostlang$frostc$ASTNode(param0, param4);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/If.frost:42
org$frostlang$frostc$IR* $tmp74 = *(&local0);
$fn76 $tmp75 = ($fn76) $tmp74->$class->vtable[5];
frost$core$Bit $tmp77 = $tmp75($tmp74);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from If.frost:42:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp78 = $tmp77.value;
bool $tmp79 = !$tmp78;
frost$core$Bit $tmp80 = (frost$core$Bit) {$tmp79};
bool $tmp81 = $tmp80.value;
if ($tmp81) goto block14; else goto block15;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/If.frost:43
org$frostlang$frostc$IR* $tmp82 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp83 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int $tmp84 = (frost$core$Int) {1u};
org$frostlang$frostc$IR$Block$ID $tmp85 = *(&local3);
org$frostlang$frostc$IR$Statement$init$frost$core$Int$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Block$ID($tmp83, $tmp84, param1, $tmp85);
$fn87 $tmp86 = ($fn87) $tmp82->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp88 = $tmp86($tmp82, $tmp83);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp83));
goto block15;
block15:;
goto block11;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/If.frost:46
org$frostlang$frostc$IR* $tmp89 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp90 = *(&local3);
$fn92 $tmp91 = ($fn92) $tmp89->$class->vtable[4];
$tmp91($tmp89, $tmp90);
org$frostlang$frostc$IR$Value* $tmp93 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp93));
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp94 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp94));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;

}
void org$frostlang$frostc$statement$If$init(org$frostlang$frostc$statement$If* param0) {

return;

}
void org$frostlang$frostc$statement$If$cleanup(org$frostlang$frostc$statement$If* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/If.frost:13
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}






