#include "org/frostlanguage/frostc/statement/If.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlanguage/frostc/Compiler.h"
#include "org/frostlanguage/frostc/Position.h"
#include "org/frostlanguage/frostc/ASTNode.h"
#include "org/frostlanguage/frostc/FixedArray.h"
#include "org/frostlanguage/frostc/IR.h"
#include "org/frostlanguage/frostc/IR/Value.h"
#include "org/frostlanguage/frostc/IR/Block/ID.h"
#include "org/frostlanguage/frostc/Compiler/AutoUnrefs.h"
#include "org/frostlanguage/frostc/Compiler/AutoScope.h"
#include "frost/core/Frost.h"
#include "org/frostlanguage/frostc/Compiler/TypeContext.h"
#include "frost/core/Int64.h"
#include "org/frostlanguage/frostc/Type.h"
#include "frost/core/Bit.h"
#include "org/frostlanguage/frostc/IR/Statement.h"
#include "org/frostlanguage/frostc/IR/Statement/ID.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/Iterator.h"


static frost$core$String $s1;
org$frostlanguage$frostc$statement$If$class_type org$frostlanguage$frostc$statement$If$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$convert$R$frost$core$String, org$frostlanguage$frostc$statement$If$cleanup} };

typedef org$frostlanguage$frostc$IR$Block$ID (*$fn7)(org$frostlanguage$frostc$IR*, frost$core$String*);
typedef org$frostlanguage$frostc$IR$Block$ID (*$fn12)(org$frostlanguage$frostc$IR*, frost$core$String*);
typedef org$frostlanguage$frostc$IR$Block$ID (*$fn33)(org$frostlanguage$frostc$IR*, frost$core$String*);
typedef org$frostlanguage$frostc$IR$Statement$ID (*$fn49)(org$frostlanguage$frostc$IR*, org$frostlanguage$frostc$IR$Statement*);
typedef void (*$fn54)(org$frostlanguage$frostc$IR*, org$frostlanguage$frostc$IR$Block$ID);
typedef frost$collections$Iterator* (*$fn59)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn63)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn68)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn76)(org$frostlanguage$frostc$IR*);
typedef org$frostlanguage$frostc$IR$Statement$ID (*$fn85)(org$frostlanguage$frostc$IR*, org$frostlanguage$frostc$IR$Statement*);
typedef void (*$fn92)(org$frostlanguage$frostc$IR*, org$frostlanguage$frostc$IR$Block$ID);
typedef frost$core$Bit (*$fn95)(org$frostlanguage$frostc$IR*);
typedef org$frostlanguage$frostc$IR$Statement$ID (*$fn104)(org$frostlanguage$frostc$IR*, org$frostlanguage$frostc$IR$Statement*);
typedef void (*$fn109)(org$frostlanguage$frostc$IR*, org$frostlanguage$frostc$IR$Block$ID);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x66\x72\x6f\x73\x74\x63\x2e\x73\x74\x61\x74\x65\x6d\x65\x6e\x74\x2e\x49\x66", 37, -2703941107695691148, NULL };
static frost$core$String $s9 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x66\x20\x74\x72\x75\x65", 7, 219748631897488, NULL };
static frost$core$String $s14 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x66\x20\x65\x6e\x64", 6, 2175728875251, NULL };
static frost$core$String $s35 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x66\x20\x66\x61\x6c\x73\x65", 8, 22194610347195263, NULL };

void org$frostlanguage$frostc$statement$If$compile$org$frostlanguage$frostc$Compiler$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$ASTNode$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT$org$frostlanguage$frostc$ASTNode$Q(org$frostlanguage$frostc$Compiler* param0, org$frostlanguage$frostc$Position param1, org$frostlanguage$frostc$ASTNode* param2, org$frostlanguage$frostc$FixedArray* param3, org$frostlanguage$frostc$ASTNode* param4) {

org$frostlanguage$frostc$IR* local0 = NULL;
org$frostlanguage$frostc$IR$Value* local1 = NULL;
org$frostlanguage$frostc$IR$Block$ID local2;
org$frostlanguage$frostc$IR$Block$ID local3;
org$frostlanguage$frostc$IR$Block$ID local4;
org$frostlanguage$frostc$Compiler$AutoUnrefs* local5 = NULL;
org$frostlanguage$frostc$IR$Value* local6 = NULL;
org$frostlanguage$frostc$Compiler$AutoScope* local7 = NULL;
org$frostlanguage$frostc$ASTNode* local8 = NULL;
// line 17
org$frostlanguage$frostc$IR** $tmp2 = &param0->ir;
org$frostlanguage$frostc$IR* $tmp3 = *$tmp2;
*(&local0) = ((org$frostlanguage$frostc$IR*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3));
org$frostlanguage$frostc$IR* $tmp4 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4));
*(&local0) = $tmp3;
// line 18
*(&local1) = ((org$frostlanguage$frostc$IR$Value*) NULL);
// line 19
org$frostlanguage$frostc$IR* $tmp5 = *(&local0);
$fn7 $tmp6 = ($fn7) $tmp5->$class->vtable[3];
org$frostlanguage$frostc$IR$Block$ID $tmp8 = $tmp6($tmp5, &$s9);
*(&local2) = $tmp8;
// line 20
// line 21
org$frostlanguage$frostc$IR* $tmp10 = *(&local0);
$fn12 $tmp11 = ($fn12) $tmp10->$class->vtable[3];
org$frostlanguage$frostc$IR$Block$ID $tmp13 = $tmp11($tmp10, &$s14);
*(&local4) = $tmp13;
// line 1
// line 23
org$frostlanguage$frostc$Compiler$AutoUnrefs* $tmp15 = (org$frostlanguage$frostc$Compiler$AutoUnrefs*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlanguage$frostc$Compiler$AutoUnrefs$class);
org$frostlanguage$frostc$Compiler$AutoUnrefs$init$org$frostlanguage$frostc$Compiler($tmp15, param0);
*(&local5) = ((org$frostlanguage$frostc$Compiler$AutoUnrefs*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp15));
org$frostlanguage$frostc$Compiler$AutoUnrefs* $tmp16 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp16));
*(&local5) = $tmp15;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp15));
// unreffing REF($25:org.frostlanguage.frostc.Compiler.AutoUnrefs)
// line 24
org$frostlanguage$frostc$Compiler$TypeContext* $tmp17 = (org$frostlanguage$frostc$Compiler$TypeContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlanguage$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp18 = (frost$core$Int64) {3};
org$frostlanguage$frostc$Type* $tmp19 = org$frostlanguage$frostc$Type$Bit$R$org$frostlanguage$frostc$Type();
org$frostlanguage$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlanguage$frostc$Type($tmp17, $tmp18, $tmp19);
org$frostlanguage$frostc$IR$Value* $tmp20 = org$frostlanguage$frostc$Compiler$compileExpression$org$frostlanguage$frostc$ASTNode$org$frostlanguage$frostc$Compiler$TypeContext$R$org$frostlanguage$frostc$IR$Value$Q(param0, param2, $tmp17);
*(&local6) = ((org$frostlanguage$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp20));
org$frostlanguage$frostc$IR$Value* $tmp21 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp21));
*(&local6) = $tmp20;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp20));
// unreffing REF($42:org.frostlanguage.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp19));
// unreffing REF($40:org.frostlanguage.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp17));
// unreffing REF($38:org.frostlanguage.frostc.Compiler.TypeContext)
// line 25
org$frostlanguage$frostc$IR$Value* $tmp22 = *(&local6);
frost$core$Bit $tmp23 = frost$core$Bit$init$builtin_bit($tmp22 == NULL);
bool $tmp24 = $tmp23.value;
if ($tmp24) goto block1; else goto block2;
block1:;
// line 26
org$frostlanguage$frostc$IR$Value* $tmp25 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp25));
// unreffing compiledTest
*(&local6) = ((org$frostlanguage$frostc$IR$Value*) NULL);
org$frostlanguage$frostc$Compiler$AutoUnrefs* $tmp26 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp26));
// unreffing unrefs
*(&local5) = ((org$frostlanguage$frostc$Compiler$AutoUnrefs*) NULL);
org$frostlanguage$frostc$IR$Value* $tmp27 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp27));
// unreffing testBit
*(&local1) = ((org$frostlanguage$frostc$IR$Value*) NULL);
org$frostlanguage$frostc$IR* $tmp28 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp28));
// unreffing ir
*(&local0) = ((org$frostlanguage$frostc$IR*) NULL);
return;
block2:;
// line 28
frost$core$Bit $tmp29 = frost$core$Bit$init$builtin_bit(param4 != NULL);
bool $tmp30 = $tmp29.value;
if ($tmp30) goto block3; else goto block5;
block3:;
// line 29
org$frostlanguage$frostc$IR* $tmp31 = *(&local0);
$fn33 $tmp32 = ($fn33) $tmp31->$class->vtable[3];
org$frostlanguage$frostc$IR$Block$ID $tmp34 = $tmp32($tmp31, &$s35);
*(&local3) = $tmp34;
goto block4;
block5:;
// line 1
// line 32
org$frostlanguage$frostc$IR$Block$ID $tmp36 = *(&local4);
*(&local3) = $tmp36;
goto block4;
block4:;
// line 34
org$frostlanguage$frostc$IR$Value* $tmp37 = *(&local6);
org$frostlanguage$frostc$IR$Value* $tmp38 = org$frostlanguage$frostc$Compiler$extractBuiltinBit$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$IR$Value$R$org$frostlanguage$frostc$IR$Value(param0, param1, $tmp37);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp38));
org$frostlanguage$frostc$IR$Value* $tmp39 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp39));
*(&local1) = $tmp38;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp38));
// unreffing REF($106:org.frostlanguage.frostc.IR.Value)
org$frostlanguage$frostc$IR$Value* $tmp40 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp40));
// unreffing compiledTest
*(&local6) = ((org$frostlanguage$frostc$IR$Value*) NULL);
org$frostlanguage$frostc$Compiler$AutoUnrefs* $tmp41 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp41));
// unreffing unrefs
*(&local5) = ((org$frostlanguage$frostc$Compiler$AutoUnrefs*) NULL);
// line 36
org$frostlanguage$frostc$IR* $tmp42 = *(&local0);
org$frostlanguage$frostc$IR$Statement* $tmp43 = (org$frostlanguage$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlanguage$frostc$IR$Statement$class);
frost$core$Int64 $tmp44 = (frost$core$Int64) {5};
org$frostlanguage$frostc$IR$Value* $tmp45 = *(&local1);
org$frostlanguage$frostc$IR$Block$ID $tmp46 = *(&local2);
org$frostlanguage$frostc$IR$Block$ID $tmp47 = *(&local3);
org$frostlanguage$frostc$IR$Statement$init$frost$core$Int64$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$IR$Value$org$frostlanguage$frostc$IR$Block$ID$org$frostlanguage$frostc$IR$Block$ID($tmp43, $tmp44, param1, $tmp45, $tmp46, $tmp47);
$fn49 $tmp48 = ($fn49) $tmp42->$class->vtable[2];
org$frostlanguage$frostc$IR$Statement$ID $tmp50 = $tmp48($tmp42, $tmp43);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp43));
// unreffing REF($128:org.frostlanguage.frostc.IR.Statement)
// line 37
org$frostlanguage$frostc$IR* $tmp51 = *(&local0);
org$frostlanguage$frostc$IR$Block$ID $tmp52 = *(&local2);
$fn54 $tmp53 = ($fn54) $tmp51->$class->vtable[4];
$tmp53($tmp51, $tmp52);
// line 1
// line 39
org$frostlanguage$frostc$Compiler$AutoScope* $tmp55 = (org$frostlanguage$frostc$Compiler$AutoScope*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlanguage$frostc$Compiler$AutoScope$class);
org$frostlanguage$frostc$Compiler$AutoScope$init$org$frostlanguage$frostc$Compiler($tmp55, param0);
*(&local7) = ((org$frostlanguage$frostc$Compiler$AutoScope*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp55));
org$frostlanguage$frostc$Compiler$AutoScope* $tmp56 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp56));
*(&local7) = $tmp55;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp55));
// unreffing REF($146:org.frostlanguage.frostc.Compiler.AutoScope)
// line 40
ITable* $tmp57 = ((frost$collections$Iterable*) param3)->$class->itable;
while ($tmp57->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp57 = $tmp57->next;
}
$fn59 $tmp58 = $tmp57->methods[0];
frost$collections$Iterator* $tmp60 = $tmp58(((frost$collections$Iterable*) param3));
goto block6;
block6:;
ITable* $tmp61 = $tmp60->$class->itable;
while ($tmp61->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp61 = $tmp61->next;
}
$fn63 $tmp62 = $tmp61->methods[0];
frost$core$Bit $tmp64 = $tmp62($tmp60);
bool $tmp65 = $tmp64.value;
if ($tmp65) goto block8; else goto block7;
block7:;
*(&local8) = ((org$frostlanguage$frostc$ASTNode*) NULL);
ITable* $tmp66 = $tmp60->$class->itable;
while ($tmp66->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp66 = $tmp66->next;
}
$fn68 $tmp67 = $tmp66->methods[1];
frost$core$Object* $tmp69 = $tmp67($tmp60);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) $tmp69)));
org$frostlanguage$frostc$ASTNode* $tmp70 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp70));
*(&local8) = ((org$frostlanguage$frostc$ASTNode*) $tmp69);
// line 41
org$frostlanguage$frostc$ASTNode* $tmp71 = *(&local8);
org$frostlanguage$frostc$Compiler$compileStatement$org$frostlanguage$frostc$ASTNode(param0, $tmp71);
frost$core$Frost$unref$frost$core$Object$Q($tmp69);
// unreffing REF($173:frost.collections.Iterator.T)
org$frostlanguage$frostc$ASTNode* $tmp72 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp72));
// unreffing s
*(&local8) = ((org$frostlanguage$frostc$ASTNode*) NULL);
goto block6;
block8:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp60));
// unreffing REF($162:frost.collections.Iterator<frost.collections.Iterable.T>)
org$frostlanguage$frostc$Compiler$AutoScope* $tmp73 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp73));
// unreffing scope
*(&local7) = ((org$frostlanguage$frostc$Compiler$AutoScope*) NULL);
// line 44
org$frostlanguage$frostc$IR* $tmp74 = *(&local0);
$fn76 $tmp75 = ($fn76) $tmp74->$class->vtable[5];
frost$core$Bit $tmp77 = $tmp75($tmp74);
frost$core$Bit $tmp78 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp77);
bool $tmp79 = $tmp78.value;
if ($tmp79) goto block9; else goto block10;
block9:;
// line 45
org$frostlanguage$frostc$IR* $tmp80 = *(&local0);
org$frostlanguage$frostc$IR$Statement* $tmp81 = (org$frostlanguage$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlanguage$frostc$IR$Statement$class);
frost$core$Int64 $tmp82 = (frost$core$Int64) {1};
org$frostlanguage$frostc$IR$Block$ID $tmp83 = *(&local4);
org$frostlanguage$frostc$IR$Statement$init$frost$core$Int64$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$IR$Block$ID($tmp81, $tmp82, param1, $tmp83);
$fn85 $tmp84 = ($fn85) $tmp80->$class->vtable[2];
org$frostlanguage$frostc$IR$Statement$ID $tmp86 = $tmp84($tmp80, $tmp81);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp81));
// unreffing REF($210:org.frostlanguage.frostc.IR.Statement)
goto block10;
block10:;
// line 47
frost$core$Bit $tmp87 = frost$core$Bit$init$builtin_bit(param4 != NULL);
bool $tmp88 = $tmp87.value;
if ($tmp88) goto block11; else goto block12;
block11:;
// line 48
org$frostlanguage$frostc$IR* $tmp89 = *(&local0);
org$frostlanguage$frostc$IR$Block$ID $tmp90 = *(&local3);
$fn92 $tmp91 = ($fn92) $tmp89->$class->vtable[4];
$tmp91($tmp89, $tmp90);
// line 49
org$frostlanguage$frostc$Compiler$compileStatement$org$frostlanguage$frostc$ASTNode(param0, param4);
// line 50
org$frostlanguage$frostc$IR* $tmp93 = *(&local0);
$fn95 $tmp94 = ($fn95) $tmp93->$class->vtable[5];
frost$core$Bit $tmp96 = $tmp94($tmp93);
frost$core$Bit $tmp97 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp96);
bool $tmp98 = $tmp97.value;
if ($tmp98) goto block13; else goto block14;
block13:;
// line 51
org$frostlanguage$frostc$IR* $tmp99 = *(&local0);
org$frostlanguage$frostc$IR$Statement* $tmp100 = (org$frostlanguage$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlanguage$frostc$IR$Statement$class);
frost$core$Int64 $tmp101 = (frost$core$Int64) {1};
org$frostlanguage$frostc$IR$Block$ID $tmp102 = *(&local4);
org$frostlanguage$frostc$IR$Statement$init$frost$core$Int64$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$IR$Block$ID($tmp100, $tmp101, param1, $tmp102);
$fn104 $tmp103 = ($fn104) $tmp99->$class->vtable[2];
org$frostlanguage$frostc$IR$Statement$ID $tmp105 = $tmp103($tmp99, $tmp100);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp100));
// unreffing REF($242:org.frostlanguage.frostc.IR.Statement)
goto block14;
block14:;
goto block12;
block12:;
// line 54
org$frostlanguage$frostc$IR* $tmp106 = *(&local0);
org$frostlanguage$frostc$IR$Block$ID $tmp107 = *(&local4);
$fn109 $tmp108 = ($fn109) $tmp106->$class->vtable[4];
$tmp108($tmp106, $tmp107);
org$frostlanguage$frostc$IR$Value* $tmp110 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp110));
// unreffing testBit
*(&local1) = ((org$frostlanguage$frostc$IR$Value*) NULL);
org$frostlanguage$frostc$IR* $tmp111 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp111));
// unreffing ir
*(&local0) = ((org$frostlanguage$frostc$IR*) NULL);
return;

}
void org$frostlanguage$frostc$statement$If$init(org$frostlanguage$frostc$statement$If* param0) {

return;

}
void org$frostlanguage$frostc$statement$If$cleanup(org$frostlanguage$frostc$statement$If* param0) {

// line 13
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}






