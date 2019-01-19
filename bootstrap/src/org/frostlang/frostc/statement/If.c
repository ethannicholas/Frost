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
typedef org$frostlang$frostc$IR$Block$ID (*$fn33)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn54)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn59)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef frost$collections$Iterator* (*$fn64)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn68)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn73)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn81)(org$frostlang$frostc$IR*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn90)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn97)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef frost$core$Bit (*$fn105)(org$frostlang$frostc$IR*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn114)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn119)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x73\x74\x61\x74\x65\x6d\x65\x6e\x74\x2e\x49\x66", 33, 7038380079964923138, NULL };
static frost$core$String $s9 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x66\x20\x74\x72\x75\x65", 7, 219748631897488, NULL };
static frost$core$String $s14 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x66\x20\x65\x6e\x64", 6, 2175728875251, NULL };
static frost$core$String $s35 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x69\x66\x20\x66\x61\x6c\x73\x65", 8, 22194610347195263, NULL };
static frost$core$String $s41 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x66\x2e\x66\x72\x6f\x73\x74", 8, 18763924379405580, NULL };
static frost$core$String $s42 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s101 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x66\x2e\x66\x72\x6f\x73\x74", 8, 18763924379405580, NULL };
static frost$core$String $s102 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65", 95, -6292765482005070111, NULL };

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
// unreffing REF($25:org.frostlang.frostc.Compiler.AutoUnrefs)
// line 24
org$frostlang$frostc$Compiler$TypeContext* $tmp17 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp18 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp19 = org$frostlang$frostc$Type$Bit$R$org$frostlang$frostc$Type();
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type($tmp17, $tmp18, $tmp19);
org$frostlang$frostc$IR$Value* $tmp20 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param2, $tmp17);
*(&local6) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp20));
org$frostlang$frostc$IR$Value* $tmp21 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp21));
*(&local6) = $tmp20;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp20));
// unreffing REF($42:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp19));
// unreffing REF($40:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp17));
// unreffing REF($38:org.frostlang.frostc.Compiler.TypeContext)
// line 25
org$frostlang$frostc$IR$Value* $tmp22 = *(&local6);
frost$core$Bit $tmp23 = frost$core$Bit$init$builtin_bit($tmp22 == NULL);
bool $tmp24 = $tmp23.value;
if ($tmp24) goto block1; else goto block2;
block1:;
// line 26
org$frostlang$frostc$IR$Value* $tmp25 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp25));
// unreffing compiledTest
*(&local6) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Compiler$AutoUnrefs* $tmp26 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp26));
// unreffing unrefs
*(&local5) = ((org$frostlang$frostc$Compiler$AutoUnrefs*) NULL);
org$frostlang$frostc$IR$Value* $tmp27 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp27));
// unreffing testBit
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp28 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp28));
// unreffing ir
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block2:;
// line 28
frost$core$Bit $tmp29 = frost$core$Bit$init$builtin_bit(param4 != NULL);
bool $tmp30 = $tmp29.value;
if ($tmp30) goto block3; else goto block5;
block3:;
// line 29
org$frostlang$frostc$IR* $tmp31 = *(&local0);
$fn33 $tmp32 = ($fn33) $tmp31->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp34 = $tmp32($tmp31, &$s35);
*(&local3) = $tmp34;
goto block4;
block5:;
// line 1
// line 32
org$frostlang$frostc$IR$Block$ID $tmp36 = *(&local4);
*(&local3) = $tmp36;
goto block4;
block4:;
// line 34
org$frostlang$frostc$IR$Value* $tmp37 = *(&local6);
frost$core$Bit $tmp38 = frost$core$Bit$init$builtin_bit($tmp37 != NULL);
bool $tmp39 = $tmp38.value;
if ($tmp39) goto block6; else goto block7;
block7:;
frost$core$Int64 $tmp40 = (frost$core$Int64) {34};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s41, $tmp40, &$s42);
abort(); // unreachable
block6:;
org$frostlang$frostc$IR$Value* $tmp43 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp37);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp43));
org$frostlang$frostc$IR$Value* $tmp44 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp44));
*(&local1) = $tmp43;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp43));
// unreffing REF($113:org.frostlang.frostc.IR.Value)
org$frostlang$frostc$IR$Value* $tmp45 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp45));
// unreffing compiledTest
*(&local6) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Compiler$AutoUnrefs* $tmp46 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp46));
// unreffing unrefs
*(&local5) = ((org$frostlang$frostc$Compiler$AutoUnrefs*) NULL);
// line 36
org$frostlang$frostc$IR* $tmp47 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp48 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp49 = (frost$core$Int64) {5};
org$frostlang$frostc$IR$Value* $tmp50 = *(&local1);
org$frostlang$frostc$IR$Block$ID $tmp51 = *(&local2);
org$frostlang$frostc$IR$Block$ID $tmp52 = *(&local3);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp48, $tmp49, param1, $tmp50, $tmp51, $tmp52);
$fn54 $tmp53 = ($fn54) $tmp47->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp55 = $tmp53($tmp47, $tmp48);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp48));
// unreffing REF($135:org.frostlang.frostc.IR.Statement)
// line 37
org$frostlang$frostc$IR* $tmp56 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp57 = *(&local2);
$fn59 $tmp58 = ($fn59) $tmp56->$class->vtable[4];
$tmp58($tmp56, $tmp57);
// line 1
// line 39
org$frostlang$frostc$Compiler$AutoScope* $tmp60 = (org$frostlang$frostc$Compiler$AutoScope*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoScope$class);
org$frostlang$frostc$Compiler$AutoScope$init$org$frostlang$frostc$Compiler($tmp60, param0);
*(&local7) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp60));
org$frostlang$frostc$Compiler$AutoScope* $tmp61 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp61));
*(&local7) = $tmp60;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp60));
// unreffing REF($153:org.frostlang.frostc.Compiler.AutoScope)
// line 40
ITable* $tmp62 = ((frost$collections$Iterable*) param3)->$class->itable;
while ($tmp62->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp62 = $tmp62->next;
}
$fn64 $tmp63 = $tmp62->methods[0];
frost$collections$Iterator* $tmp65 = $tmp63(((frost$collections$Iterable*) param3));
goto block8;
block8:;
ITable* $tmp66 = $tmp65->$class->itable;
while ($tmp66->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp66 = $tmp66->next;
}
$fn68 $tmp67 = $tmp66->methods[0];
frost$core$Bit $tmp69 = $tmp67($tmp65);
bool $tmp70 = $tmp69.value;
if ($tmp70) goto block10; else goto block9;
block9:;
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp71 = $tmp65->$class->itable;
while ($tmp71->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp71 = $tmp71->next;
}
$fn73 $tmp72 = $tmp71->methods[1];
frost$core$Object* $tmp74 = $tmp72($tmp65);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp74)));
org$frostlang$frostc$ASTNode* $tmp75 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp75));
*(&local8) = ((org$frostlang$frostc$ASTNode*) $tmp74);
// line 41
org$frostlang$frostc$ASTNode* $tmp76 = *(&local8);
org$frostlang$frostc$Compiler$compileStatement$org$frostlang$frostc$ASTNode(param0, $tmp76);
frost$core$Frost$unref$frost$core$Object$Q($tmp74);
// unreffing REF($180:frost.collections.Iterator.T)
org$frostlang$frostc$ASTNode* $tmp77 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp77));
// unreffing s
*(&local8) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block8;
block10:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp65));
// unreffing REF($169:frost.collections.Iterator<frost.collections.Iterable.T>)
org$frostlang$frostc$Compiler$AutoScope* $tmp78 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp78));
// unreffing scope
*(&local7) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
// line 44
org$frostlang$frostc$IR* $tmp79 = *(&local0);
$fn81 $tmp80 = ($fn81) $tmp79->$class->vtable[5];
frost$core$Bit $tmp82 = $tmp80($tmp79);
frost$core$Bit $tmp83 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp82);
bool $tmp84 = $tmp83.value;
if ($tmp84) goto block11; else goto block12;
block11:;
// line 45
org$frostlang$frostc$IR* $tmp85 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp86 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp87 = (frost$core$Int64) {1};
org$frostlang$frostc$IR$Block$ID $tmp88 = *(&local4);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Block$ID($tmp86, $tmp87, param1, $tmp88);
$fn90 $tmp89 = ($fn90) $tmp85->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp91 = $tmp89($tmp85, $tmp86);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp86));
// unreffing REF($217:org.frostlang.frostc.IR.Statement)
goto block12;
block12:;
// line 47
frost$core$Bit $tmp92 = frost$core$Bit$init$builtin_bit(param4 != NULL);
bool $tmp93 = $tmp92.value;
if ($tmp93) goto block13; else goto block14;
block13:;
// line 48
org$frostlang$frostc$IR* $tmp94 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp95 = *(&local3);
$fn97 $tmp96 = ($fn97) $tmp94->$class->vtable[4];
$tmp96($tmp94, $tmp95);
// line 49
frost$core$Bit $tmp98 = frost$core$Bit$init$builtin_bit(param4 != NULL);
bool $tmp99 = $tmp98.value;
if ($tmp99) goto block15; else goto block16;
block16:;
frost$core$Int64 $tmp100 = (frost$core$Int64) {49};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s101, $tmp100, &$s102);
abort(); // unreachable
block15:;
org$frostlang$frostc$Compiler$compileStatement$org$frostlang$frostc$ASTNode(param0, param4);
// line 50
org$frostlang$frostc$IR* $tmp103 = *(&local0);
$fn105 $tmp104 = ($fn105) $tmp103->$class->vtable[5];
frost$core$Bit $tmp106 = $tmp104($tmp103);
frost$core$Bit $tmp107 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp106);
bool $tmp108 = $tmp107.value;
if ($tmp108) goto block17; else goto block18;
block17:;
// line 51
org$frostlang$frostc$IR* $tmp109 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp110 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp111 = (frost$core$Int64) {1};
org$frostlang$frostc$IR$Block$ID $tmp112 = *(&local4);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Block$ID($tmp110, $tmp111, param1, $tmp112);
$fn114 $tmp113 = ($fn114) $tmp109->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp115 = $tmp113($tmp109, $tmp110);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp110));
// unreffing REF($256:org.frostlang.frostc.IR.Statement)
goto block18;
block18:;
goto block14;
block14:;
// line 54
org$frostlang$frostc$IR* $tmp116 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp117 = *(&local4);
$fn119 $tmp118 = ($fn119) $tmp116->$class->vtable[4];
$tmp118($tmp116, $tmp117);
org$frostlang$frostc$IR$Value* $tmp120 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp120));
// unreffing testBit
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp121 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp121));
// unreffing ir
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






