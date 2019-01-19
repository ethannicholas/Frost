#include "org/frostlang/frostc/statement/Do.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/Compiler.h"
#include "org/frostlang/frostc/Position.h"
#include "org/frostlang/frostc/FixedArray.h"
#include "org/frostlang/frostc/ASTNode.h"
#include "org/frostlang/frostc/IR.h"
#include "org/frostlang/frostc/IR/Block/ID.h"
#include "org/frostlang/frostc/Compiler/AutoContext.h"
#include "org/frostlang/frostc/Compiler/AutoScope.h"
#include "org/frostlang/frostc/IR/Value.h"
#include "org/frostlang/frostc/Compiler/AutoUnrefs.h"
#include "frost/core/Frost.h"
#include "org/frostlang/frostc/Compiler/EnclosingContext.h"
#include "frost/core/Int64.h"
#include "org/frostlang/frostc/IR/Statement.h"
#include "org/frostlang/frostc/IR/Statement/ID.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/Iterator.h"
#include "frost/core/Bit.h"
#include "org/frostlang/frostc/Compiler/TypeContext.h"
#include "org/frostlang/frostc/Type.h"


static frost$core$String $s1;
org$frostlang$frostc$statement$Do$class_type org$frostlang$frostc$statement$Do$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$statement$Do$cleanup} };

typedef org$frostlang$frostc$IR$Block$ID (*$fn7)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn12)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn17)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn33)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn38)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef frost$collections$Iterator* (*$fn41)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn45)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn50)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn59)(org$frostlang$frostc$IR*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn68)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn73)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn110)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn115)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x73\x74\x61\x74\x65\x6d\x65\x6e\x74\x2e\x44\x6f", 33, 7038380079964922642, NULL };
static frost$core$String $s9 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x64\x6f\x20\x62\x6f\x64\x79", 7, 214535603471274, NULL };
static frost$core$String $s14 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x64\x6f\x20\x74\x65\x73\x74", 7, 214535621916192, NULL };
static frost$core$String $s19 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x64\x6f\x20\x65\x6e\x64", 6, 2124114916355, NULL };
static frost$core$String $s92 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x44\x6f\x2e\x66\x72\x6f\x73\x74", 8, 18237410384707484, NULL };
static frost$core$String $s93 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };
static frost$core$String $s105 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x44\x6f\x2e\x66\x72\x6f\x73\x74", 8, 18237410384707484, NULL };
static frost$core$String $s106 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x56\x61\x6c\x75\x65", 97, -8770584123879307747, NULL };

void org$frostlang$frostc$statement$Do$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, frost$core$String* param2, org$frostlang$frostc$FixedArray* param3, org$frostlang$frostc$ASTNode* param4) {

org$frostlang$frostc$IR* local0 = NULL;
org$frostlang$frostc$IR$Block$ID local1;
org$frostlang$frostc$IR$Block$ID local2;
org$frostlang$frostc$IR$Block$ID local3;
org$frostlang$frostc$Compiler$AutoContext* local4 = NULL;
org$frostlang$frostc$Compiler$AutoScope* local5 = NULL;
org$frostlang$frostc$ASTNode* local6 = NULL;
org$frostlang$frostc$IR$Value* local7 = NULL;
org$frostlang$frostc$Compiler$AutoUnrefs* local8 = NULL;
org$frostlang$frostc$IR$Value* local9 = NULL;
// line 19
org$frostlang$frostc$IR** $tmp2 = &param0->ir;
org$frostlang$frostc$IR* $tmp3 = *$tmp2;
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3));
org$frostlang$frostc$IR* $tmp4 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4));
*(&local0) = $tmp3;
// line 20
org$frostlang$frostc$IR* $tmp5 = *(&local0);
$fn7 $tmp6 = ($fn7) $tmp5->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp8 = $tmp6($tmp5, &$s9);
*(&local1) = $tmp8;
// line 21
org$frostlang$frostc$IR* $tmp10 = *(&local0);
$fn12 $tmp11 = ($fn12) $tmp10->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp13 = $tmp11($tmp10, &$s14);
*(&local2) = $tmp13;
// line 22
org$frostlang$frostc$IR* $tmp15 = *(&local0);
$fn17 $tmp16 = ($fn17) $tmp15->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp18 = $tmp16($tmp15, &$s19);
*(&local3) = $tmp18;
// line 1
// line 24
org$frostlang$frostc$Compiler$AutoContext* $tmp20 = (org$frostlang$frostc$Compiler$AutoContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoContext$class);
org$frostlang$frostc$Compiler$EnclosingContext* $tmp21 = (org$frostlang$frostc$Compiler$EnclosingContext*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$Compiler$EnclosingContext$class);
frost$core$Int64 $tmp22 = (frost$core$Int64) {0};
org$frostlang$frostc$IR$Block$ID $tmp23 = *(&local3);
org$frostlang$frostc$IR$Block$ID $tmp24 = *(&local2);
org$frostlang$frostc$Compiler$EnclosingContext$init$frost$core$Int64$frost$core$String$Q$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp21, $tmp22, param2, $tmp23, $tmp24);
org$frostlang$frostc$Compiler$AutoContext$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$Compiler$EnclosingContext($tmp20, param0, $tmp21);
*(&local4) = ((org$frostlang$frostc$Compiler$AutoContext*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp20));
org$frostlang$frostc$Compiler$AutoContext* $tmp25 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp25));
*(&local4) = $tmp20;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp21));
// unreffing REF($28:org.frostlang.frostc.Compiler.EnclosingContext)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp20));
// unreffing REF($27:org.frostlang.frostc.Compiler.AutoContext)
// line 25
org$frostlang$frostc$Compiler$AutoScope* $tmp26 = (org$frostlang$frostc$Compiler$AutoScope*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoScope$class);
org$frostlang$frostc$Compiler$AutoScope$init$org$frostlang$frostc$Compiler($tmp26, param0);
*(&local5) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp26));
org$frostlang$frostc$Compiler$AutoScope* $tmp27 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp27));
*(&local5) = $tmp26;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp26));
// unreffing REF($48:org.frostlang.frostc.Compiler.AutoScope)
// line 26
org$frostlang$frostc$IR* $tmp28 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp29 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp30 = (frost$core$Int64) {1};
org$frostlang$frostc$IR$Block$ID $tmp31 = *(&local1);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Block$ID($tmp29, $tmp30, param1, $tmp31);
$fn33 $tmp32 = ($fn33) $tmp28->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp34 = $tmp32($tmp28, $tmp29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp29));
// unreffing REF($62:org.frostlang.frostc.IR.Statement)
// line 27
org$frostlang$frostc$IR* $tmp35 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp36 = *(&local1);
$fn38 $tmp37 = ($fn38) $tmp35->$class->vtable[4];
$tmp37($tmp35, $tmp36);
// line 28
ITable* $tmp39 = ((frost$collections$Iterable*) param3)->$class->itable;
while ($tmp39->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp39 = $tmp39->next;
}
$fn41 $tmp40 = $tmp39->methods[0];
frost$collections$Iterator* $tmp42 = $tmp40(((frost$collections$Iterable*) param3));
goto block1;
block1:;
ITable* $tmp43 = $tmp42->$class->itable;
while ($tmp43->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp43 = $tmp43->next;
}
$fn45 $tmp44 = $tmp43->methods[0];
frost$core$Bit $tmp46 = $tmp44($tmp42);
bool $tmp47 = $tmp46.value;
if ($tmp47) goto block3; else goto block2;
block2:;
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp48 = $tmp42->$class->itable;
while ($tmp48->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp48 = $tmp48->next;
}
$fn50 $tmp49 = $tmp48->methods[1];
frost$core$Object* $tmp51 = $tmp49($tmp42);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp51)));
org$frostlang$frostc$ASTNode* $tmp52 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp52));
*(&local6) = ((org$frostlang$frostc$ASTNode*) $tmp51);
// line 29
org$frostlang$frostc$ASTNode* $tmp53 = *(&local6);
org$frostlang$frostc$Compiler$compileStatement$org$frostlang$frostc$ASTNode(param0, $tmp53);
frost$core$Frost$unref$frost$core$Object$Q($tmp51);
// unreffing REF($91:frost.collections.Iterator.T)
org$frostlang$frostc$ASTNode* $tmp54 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp54));
// unreffing s
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp42));
// unreffing REF($80:frost.collections.Iterator<frost.collections.Iterable.T>)
org$frostlang$frostc$Compiler$AutoScope* $tmp55 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp55));
// unreffing scope
*(&local5) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
org$frostlang$frostc$Compiler$AutoContext* $tmp56 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp56));
// unreffing context
*(&local4) = ((org$frostlang$frostc$Compiler$AutoContext*) NULL);
// line 32
org$frostlang$frostc$IR* $tmp57 = *(&local0);
$fn59 $tmp58 = ($fn59) $tmp57->$class->vtable[5];
frost$core$Bit $tmp60 = $tmp58($tmp57);
frost$core$Bit $tmp61 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp60);
bool $tmp62 = $tmp61.value;
if ($tmp62) goto block4; else goto block5;
block4:;
// line 33
org$frostlang$frostc$IR* $tmp63 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp64 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp65 = (frost$core$Int64) {1};
org$frostlang$frostc$IR$Block$ID $tmp66 = *(&local2);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Block$ID($tmp64, $tmp65, param1, $tmp66);
$fn68 $tmp67 = ($fn68) $tmp63->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp69 = $tmp67($tmp63, $tmp64);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp64));
// unreffing REF($133:org.frostlang.frostc.IR.Statement)
goto block5;
block5:;
// line 35
org$frostlang$frostc$IR* $tmp70 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp71 = *(&local2);
$fn73 $tmp72 = ($fn73) $tmp70->$class->vtable[4];
$tmp72($tmp70, $tmp71);
// line 36
*(&local7) = ((org$frostlang$frostc$IR$Value*) NULL);
// line 1
// line 38
org$frostlang$frostc$Compiler$AutoUnrefs* $tmp74 = (org$frostlang$frostc$Compiler$AutoUnrefs*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoUnrefs$class);
org$frostlang$frostc$Compiler$AutoUnrefs$init$org$frostlang$frostc$Compiler($tmp74, param0);
*(&local8) = ((org$frostlang$frostc$Compiler$AutoUnrefs*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp74));
org$frostlang$frostc$Compiler$AutoUnrefs* $tmp75 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp75));
*(&local8) = $tmp74;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp74));
// unreffing REF($152:org.frostlang.frostc.Compiler.AutoUnrefs)
// line 39
org$frostlang$frostc$Compiler$TypeContext* $tmp76 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp77 = (frost$core$Int64) {3};
org$frostlang$frostc$Type* $tmp78 = org$frostlang$frostc$Type$Bit$R$org$frostlang$frostc$Type();
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type($tmp76, $tmp77, $tmp78);
org$frostlang$frostc$IR$Value* $tmp79 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param4, $tmp76);
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp79));
org$frostlang$frostc$IR$Value* $tmp80 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp80));
*(&local9) = $tmp79;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp79));
// unreffing REF($169:org.frostlang.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp78));
// unreffing REF($167:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp76));
// unreffing REF($165:org.frostlang.frostc.Compiler.TypeContext)
// line 40
org$frostlang$frostc$IR$Value* $tmp81 = *(&local9);
frost$core$Bit $tmp82 = frost$core$Bit$init$builtin_bit($tmp81 == NULL);
bool $tmp83 = $tmp82.value;
if ($tmp83) goto block6; else goto block7;
block6:;
// line 41
org$frostlang$frostc$IR$Value* $tmp84 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp84));
// unreffing compiledTest
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Compiler$AutoUnrefs* $tmp85 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp85));
// unreffing unrefs
*(&local8) = ((org$frostlang$frostc$Compiler$AutoUnrefs*) NULL);
org$frostlang$frostc$IR$Value* $tmp86 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp86));
// unreffing testBit
*(&local7) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp87 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp87));
// unreffing ir
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block7:;
// line 43
org$frostlang$frostc$IR$Value* $tmp88 = *(&local9);
frost$core$Bit $tmp89 = frost$core$Bit$init$builtin_bit($tmp88 != NULL);
bool $tmp90 = $tmp89.value;
if ($tmp90) goto block8; else goto block9;
block9:;
frost$core$Int64 $tmp91 = (frost$core$Int64) {43};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s92, $tmp91, &$s93);
abort(); // unreachable
block8:;
org$frostlang$frostc$IR$Value* $tmp94 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp88);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp94));
org$frostlang$frostc$IR$Value* $tmp95 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp95));
*(&local7) = $tmp94;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp94));
// unreffing REF($224:org.frostlang.frostc.IR.Value)
org$frostlang$frostc$IR$Value* $tmp96 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp96));
// unreffing compiledTest
*(&local9) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Compiler$AutoUnrefs* $tmp97 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp97));
// unreffing unrefs
*(&local8) = ((org$frostlang$frostc$Compiler$AutoUnrefs*) NULL);
// line 45
org$frostlang$frostc$IR* $tmp98 = *(&local0);
org$frostlang$frostc$IR$Statement* $tmp99 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp100 = (frost$core$Int64) {5};
org$frostlang$frostc$IR$Value* $tmp101 = *(&local7);
frost$core$Bit $tmp102 = frost$core$Bit$init$builtin_bit($tmp101 != NULL);
bool $tmp103 = $tmp102.value;
if ($tmp103) goto block10; else goto block11;
block11:;
frost$core$Int64 $tmp104 = (frost$core$Int64) {45};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s105, $tmp104, &$s106);
abort(); // unreachable
block10:;
org$frostlang$frostc$IR$Block$ID $tmp107 = *(&local1);
org$frostlang$frostc$IR$Block$ID $tmp108 = *(&local3);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp99, $tmp100, param1, $tmp101, $tmp107, $tmp108);
$fn110 $tmp109 = ($fn110) $tmp98->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp111 = $tmp109($tmp98, $tmp99);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp99));
// unreffing REF($247:org.frostlang.frostc.IR.Statement)
// line 46
org$frostlang$frostc$IR* $tmp112 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp113 = *(&local3);
$fn115 $tmp114 = ($fn115) $tmp112->$class->vtable[4];
$tmp114($tmp112, $tmp113);
org$frostlang$frostc$IR$Value* $tmp116 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp116));
// unreffing testBit
*(&local7) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp117 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp117));
// unreffing ir
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;

}
void org$frostlang$frostc$statement$Do$init(org$frostlang$frostc$statement$Do* param0) {

return;

}
void org$frostlang$frostc$statement$Do$cleanup(org$frostlang$frostc$statement$Do* param0) {

// line 15
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}






