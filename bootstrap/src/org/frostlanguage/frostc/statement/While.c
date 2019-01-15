#include "org/frostlanguage/frostc/statement/While.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlanguage/frostc/Compiler.h"
#include "org/frostlanguage/frostc/Position.h"
#include "org/frostlanguage/frostc/ASTNode.h"
#include "org/frostlanguage/frostc/FixedArray.h"
#include "org/frostlanguage/frostc/IR.h"
#include "org/frostlanguage/frostc/IR/Block/ID.h"
#include "org/frostlanguage/frostc/Compiler/AutoContext.h"
#include "org/frostlanguage/frostc/Compiler/AutoScope.h"
#include "org/frostlanguage/frostc/IR/Value.h"
#include "org/frostlanguage/frostc/Compiler/AutoUnrefs.h"
#include "frost/core/Frost.h"
#include "org/frostlanguage/frostc/Compiler/EnclosingContext.h"
#include "frost/core/Int64.h"
#include "org/frostlanguage/frostc/IR/Statement.h"
#include "org/frostlanguage/frostc/IR/Statement/ID.h"
#include "org/frostlanguage/frostc/Compiler/TypeContext.h"
#include "org/frostlanguage/frostc/Type.h"
#include "frost/core/Bit.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/Iterator.h"


static frost$core$String $s1;
org$frostlanguage$frostc$statement$While$class_type org$frostlanguage$frostc$statement$While$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$convert$R$frost$core$String, org$frostlanguage$frostc$statement$While$cleanup} };

typedef org$frostlanguage$frostc$IR$Block$ID (*$fn7)(org$frostlanguage$frostc$IR*, frost$core$String*);
typedef org$frostlanguage$frostc$IR$Block$ID (*$fn12)(org$frostlanguage$frostc$IR*, frost$core$String*);
typedef org$frostlanguage$frostc$IR$Block$ID (*$fn17)(org$frostlanguage$frostc$IR*, frost$core$String*);
typedef org$frostlanguage$frostc$IR$Statement$ID (*$fn33)(org$frostlanguage$frostc$IR*, org$frostlanguage$frostc$IR$Statement*);
typedef void (*$fn38)(org$frostlanguage$frostc$IR*, org$frostlanguage$frostc$IR$Block$ID);
typedef org$frostlanguage$frostc$IR$Statement$ID (*$fn67)(org$frostlanguage$frostc$IR*, org$frostlanguage$frostc$IR$Statement*);
typedef void (*$fn72)(org$frostlanguage$frostc$IR*, org$frostlanguage$frostc$IR$Block$ID);
typedef frost$collections$Iterator* (*$fn75)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn79)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn84)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn94)(org$frostlanguage$frostc$IR*);
typedef org$frostlanguage$frostc$IR$Statement$ID (*$fn103)(org$frostlanguage$frostc$IR*, org$frostlanguage$frostc$IR$Statement*);
typedef void (*$fn108)(org$frostlanguage$frostc$IR*, org$frostlanguage$frostc$IR$Block$ID);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x66\x72\x6f\x73\x74\x63\x2e\x73\x74\x61\x74\x65\x6d\x65\x6e\x74\x2e\x57\x68\x69\x6c\x65", 40, -9043700212921335666, NULL };
static frost$core$String $s9 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x77\x68\x69\x6c\x65\x20\x74\x65\x73\x74", 10, 1940631136532459410, NULL };
static frost$core$String $s14 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x77\x68\x69\x6c\x65\x20\x62\x6f\x64\x79", 10, 1940631136514014492, NULL };
static frost$core$String $s19 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x77\x68\x69\x6c\x65\x20\x65\x6e\x64", 9, 2393547565294467981, NULL };

void org$frostlanguage$frostc$statement$While$compile$org$frostlanguage$frostc$Compiler$org$frostlanguage$frostc$Position$frost$core$String$Q$org$frostlanguage$frostc$ASTNode$org$frostlanguage$frostc$FixedArray$LTorg$frostlanguage$frostc$ASTNode$GT(org$frostlanguage$frostc$Compiler* param0, org$frostlanguage$frostc$Position param1, frost$core$String* param2, org$frostlanguage$frostc$ASTNode* param3, org$frostlanguage$frostc$FixedArray* param4) {

org$frostlanguage$frostc$IR* local0 = NULL;
org$frostlanguage$frostc$IR$Block$ID local1;
org$frostlanguage$frostc$IR$Block$ID local2;
org$frostlanguage$frostc$IR$Block$ID local3;
org$frostlanguage$frostc$Compiler$AutoContext* local4 = NULL;
org$frostlanguage$frostc$Compiler$AutoScope* local5 = NULL;
org$frostlanguage$frostc$IR$Value* local6 = NULL;
org$frostlanguage$frostc$Compiler$AutoUnrefs* local7 = NULL;
org$frostlanguage$frostc$IR$Value* local8 = NULL;
org$frostlanguage$frostc$ASTNode* local9 = NULL;
// line 19
org$frostlanguage$frostc$IR** $tmp2 = &param0->ir;
org$frostlanguage$frostc$IR* $tmp3 = *$tmp2;
*(&local0) = ((org$frostlanguage$frostc$IR*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3));
org$frostlanguage$frostc$IR* $tmp4 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4));
*(&local0) = $tmp3;
// line 20
org$frostlanguage$frostc$IR* $tmp5 = *(&local0);
$fn7 $tmp6 = ($fn7) $tmp5->$class->vtable[3];
org$frostlanguage$frostc$IR$Block$ID $tmp8 = $tmp6($tmp5, &$s9);
*(&local1) = $tmp8;
// line 21
org$frostlanguage$frostc$IR* $tmp10 = *(&local0);
$fn12 $tmp11 = ($fn12) $tmp10->$class->vtable[3];
org$frostlanguage$frostc$IR$Block$ID $tmp13 = $tmp11($tmp10, &$s14);
*(&local2) = $tmp13;
// line 22
org$frostlanguage$frostc$IR* $tmp15 = *(&local0);
$fn17 $tmp16 = ($fn17) $tmp15->$class->vtable[3];
org$frostlanguage$frostc$IR$Block$ID $tmp18 = $tmp16($tmp15, &$s19);
*(&local3) = $tmp18;
// line 1
// line 24
org$frostlanguage$frostc$Compiler$AutoContext* $tmp20 = (org$frostlanguage$frostc$Compiler$AutoContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlanguage$frostc$Compiler$AutoContext$class);
org$frostlanguage$frostc$Compiler$EnclosingContext* $tmp21 = (org$frostlanguage$frostc$Compiler$EnclosingContext*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlanguage$frostc$Compiler$EnclosingContext$class);
frost$core$Int64 $tmp22 = (frost$core$Int64) {0};
org$frostlanguage$frostc$IR$Block$ID $tmp23 = *(&local3);
org$frostlanguage$frostc$IR$Block$ID $tmp24 = *(&local1);
org$frostlanguage$frostc$Compiler$EnclosingContext$init$frost$core$Int64$frost$core$String$Q$org$frostlanguage$frostc$IR$Block$ID$org$frostlanguage$frostc$IR$Block$ID($tmp21, $tmp22, param2, $tmp23, $tmp24);
org$frostlanguage$frostc$Compiler$AutoContext$init$org$frostlanguage$frostc$Compiler$org$frostlanguage$frostc$Compiler$EnclosingContext($tmp20, param0, $tmp21);
*(&local4) = ((org$frostlanguage$frostc$Compiler$AutoContext*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp20));
org$frostlanguage$frostc$Compiler$AutoContext* $tmp25 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp25));
*(&local4) = $tmp20;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp21));
// unreffing REF($28:org.frostlanguage.frostc.Compiler.EnclosingContext)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp20));
// unreffing REF($27:org.frostlanguage.frostc.Compiler.AutoContext)
// line 25
org$frostlanguage$frostc$Compiler$AutoScope* $tmp26 = (org$frostlanguage$frostc$Compiler$AutoScope*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlanguage$frostc$Compiler$AutoScope$class);
org$frostlanguage$frostc$Compiler$AutoScope$init$org$frostlanguage$frostc$Compiler($tmp26, param0);
*(&local5) = ((org$frostlanguage$frostc$Compiler$AutoScope*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp26));
org$frostlanguage$frostc$Compiler$AutoScope* $tmp27 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp27));
*(&local5) = $tmp26;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp26));
// unreffing REF($48:org.frostlanguage.frostc.Compiler.AutoScope)
// line 26
org$frostlanguage$frostc$IR* $tmp28 = *(&local0);
org$frostlanguage$frostc$IR$Statement* $tmp29 = (org$frostlanguage$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlanguage$frostc$IR$Statement$class);
frost$core$Int64 $tmp30 = (frost$core$Int64) {1};
org$frostlanguage$frostc$IR$Block$ID $tmp31 = *(&local1);
org$frostlanguage$frostc$IR$Statement$init$frost$core$Int64$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$IR$Block$ID($tmp29, $tmp30, param1, $tmp31);
$fn33 $tmp32 = ($fn33) $tmp28->$class->vtable[2];
org$frostlanguage$frostc$IR$Statement$ID $tmp34 = $tmp32($tmp28, $tmp29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp29));
// unreffing REF($62:org.frostlanguage.frostc.IR.Statement)
// line 27
org$frostlanguage$frostc$IR* $tmp35 = *(&local0);
org$frostlanguage$frostc$IR$Block$ID $tmp36 = *(&local1);
$fn38 $tmp37 = ($fn38) $tmp35->$class->vtable[4];
$tmp37($tmp35, $tmp36);
// line 28
*(&local6) = ((org$frostlanguage$frostc$IR$Value*) NULL);
// line 1
// line 30
org$frostlanguage$frostc$Compiler$AutoUnrefs* $tmp39 = (org$frostlanguage$frostc$Compiler$AutoUnrefs*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlanguage$frostc$Compiler$AutoUnrefs$class);
org$frostlanguage$frostc$Compiler$AutoUnrefs$init$org$frostlanguage$frostc$Compiler($tmp39, param0);
*(&local7) = ((org$frostlanguage$frostc$Compiler$AutoUnrefs*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp39));
org$frostlanguage$frostc$Compiler$AutoUnrefs* $tmp40 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp40));
*(&local7) = $tmp39;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp39));
// unreffing REF($80:org.frostlanguage.frostc.Compiler.AutoUnrefs)
// line 31
org$frostlanguage$frostc$Compiler$TypeContext* $tmp41 = (org$frostlanguage$frostc$Compiler$TypeContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlanguage$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp42 = (frost$core$Int64) {3};
org$frostlanguage$frostc$Type* $tmp43 = org$frostlanguage$frostc$Type$Bit$R$org$frostlanguage$frostc$Type();
org$frostlanguage$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlanguage$frostc$Type($tmp41, $tmp42, $tmp43);
org$frostlanguage$frostc$IR$Value* $tmp44 = org$frostlanguage$frostc$Compiler$compileExpression$org$frostlanguage$frostc$ASTNode$org$frostlanguage$frostc$Compiler$TypeContext$R$org$frostlanguage$frostc$IR$Value$Q(param0, param3, $tmp41);
*(&local8) = ((org$frostlanguage$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp44));
org$frostlanguage$frostc$IR$Value* $tmp45 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp45));
*(&local8) = $tmp44;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp44));
// unreffing REF($97:org.frostlanguage.frostc.IR.Value?)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp43));
// unreffing REF($95:org.frostlanguage.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp41));
// unreffing REF($93:org.frostlanguage.frostc.Compiler.TypeContext)
// line 32
org$frostlanguage$frostc$IR$Value* $tmp46 = *(&local8);
frost$core$Bit $tmp47 = frost$core$Bit$init$builtin_bit($tmp46 == NULL);
bool $tmp48 = $tmp47.value;
if ($tmp48) goto block1; else goto block2;
block1:;
// line 33
org$frostlanguage$frostc$IR$Value* $tmp49 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp49));
// unreffing compiledTest
*(&local8) = ((org$frostlanguage$frostc$IR$Value*) NULL);
org$frostlanguage$frostc$Compiler$AutoUnrefs* $tmp50 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp50));
// unreffing unrefs
*(&local7) = ((org$frostlanguage$frostc$Compiler$AutoUnrefs*) NULL);
org$frostlanguage$frostc$IR$Value* $tmp51 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp51));
// unreffing testBit
*(&local6) = ((org$frostlanguage$frostc$IR$Value*) NULL);
org$frostlanguage$frostc$Compiler$AutoScope* $tmp52 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp52));
// unreffing scope
*(&local5) = ((org$frostlanguage$frostc$Compiler$AutoScope*) NULL);
org$frostlanguage$frostc$Compiler$AutoContext* $tmp53 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp53));
// unreffing context
*(&local4) = ((org$frostlanguage$frostc$Compiler$AutoContext*) NULL);
org$frostlanguage$frostc$IR* $tmp54 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp54));
// unreffing ir
*(&local0) = ((org$frostlanguage$frostc$IR*) NULL);
return;
block2:;
// line 35
org$frostlanguage$frostc$IR$Value* $tmp55 = *(&local8);
org$frostlanguage$frostc$IR$Value* $tmp56 = org$frostlanguage$frostc$Compiler$extractBuiltinBit$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$IR$Value$R$org$frostlanguage$frostc$IR$Value(param0, param1, $tmp55);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp56));
org$frostlanguage$frostc$IR$Value* $tmp57 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp57));
*(&local6) = $tmp56;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp56));
// unreffing REF($155:org.frostlanguage.frostc.IR.Value)
org$frostlanguage$frostc$IR$Value* $tmp58 = *(&local8);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp58));
// unreffing compiledTest
*(&local8) = ((org$frostlanguage$frostc$IR$Value*) NULL);
org$frostlanguage$frostc$Compiler$AutoUnrefs* $tmp59 = *(&local7);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp59));
// unreffing unrefs
*(&local7) = ((org$frostlanguage$frostc$Compiler$AutoUnrefs*) NULL);
// line 37
org$frostlanguage$frostc$IR* $tmp60 = *(&local0);
org$frostlanguage$frostc$IR$Statement* $tmp61 = (org$frostlanguage$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlanguage$frostc$IR$Statement$class);
frost$core$Int64 $tmp62 = (frost$core$Int64) {5};
org$frostlanguage$frostc$IR$Value* $tmp63 = *(&local6);
org$frostlanguage$frostc$IR$Block$ID $tmp64 = *(&local2);
org$frostlanguage$frostc$IR$Block$ID $tmp65 = *(&local3);
org$frostlanguage$frostc$IR$Statement$init$frost$core$Int64$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$IR$Value$org$frostlanguage$frostc$IR$Block$ID$org$frostlanguage$frostc$IR$Block$ID($tmp61, $tmp62, param1, $tmp63, $tmp64, $tmp65);
$fn67 $tmp66 = ($fn67) $tmp60->$class->vtable[2];
org$frostlanguage$frostc$IR$Statement$ID $tmp68 = $tmp66($tmp60, $tmp61);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp61));
// unreffing REF($177:org.frostlanguage.frostc.IR.Statement)
// line 38
org$frostlanguage$frostc$IR* $tmp69 = *(&local0);
org$frostlanguage$frostc$IR$Block$ID $tmp70 = *(&local2);
$fn72 $tmp71 = ($fn72) $tmp69->$class->vtable[4];
$tmp71($tmp69, $tmp70);
// line 39
ITable* $tmp73 = ((frost$collections$Iterable*) param4)->$class->itable;
while ($tmp73->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp73 = $tmp73->next;
}
$fn75 $tmp74 = $tmp73->methods[0];
frost$collections$Iterator* $tmp76 = $tmp74(((frost$collections$Iterable*) param4));
goto block3;
block3:;
ITable* $tmp77 = $tmp76->$class->itable;
while ($tmp77->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp77 = $tmp77->next;
}
$fn79 $tmp78 = $tmp77->methods[0];
frost$core$Bit $tmp80 = $tmp78($tmp76);
bool $tmp81 = $tmp80.value;
if ($tmp81) goto block5; else goto block4;
block4:;
*(&local9) = ((org$frostlanguage$frostc$ASTNode*) NULL);
ITable* $tmp82 = $tmp76->$class->itable;
while ($tmp82->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp82 = $tmp82->next;
}
$fn84 $tmp83 = $tmp82->methods[1];
frost$core$Object* $tmp85 = $tmp83($tmp76);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$ASTNode*) $tmp85)));
org$frostlanguage$frostc$ASTNode* $tmp86 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp86));
*(&local9) = ((org$frostlanguage$frostc$ASTNode*) $tmp85);
// line 40
org$frostlanguage$frostc$ASTNode* $tmp87 = *(&local9);
org$frostlanguage$frostc$Compiler$compileStatement$org$frostlanguage$frostc$ASTNode(param0, $tmp87);
frost$core$Frost$unref$frost$core$Object$Q($tmp85);
// unreffing REF($208:frost.collections.Iterator.T)
org$frostlanguage$frostc$ASTNode* $tmp88 = *(&local9);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp88));
// unreffing s
*(&local9) = ((org$frostlanguage$frostc$ASTNode*) NULL);
goto block3;
block5:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp76));
// unreffing REF($197:frost.collections.Iterator<frost.collections.Iterable.T>)
org$frostlanguage$frostc$IR$Value* $tmp89 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp89));
// unreffing testBit
*(&local6) = ((org$frostlanguage$frostc$IR$Value*) NULL);
org$frostlanguage$frostc$Compiler$AutoScope* $tmp90 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp90));
// unreffing scope
*(&local5) = ((org$frostlanguage$frostc$Compiler$AutoScope*) NULL);
org$frostlanguage$frostc$Compiler$AutoContext* $tmp91 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp91));
// unreffing context
*(&local4) = ((org$frostlanguage$frostc$Compiler$AutoContext*) NULL);
// line 43
org$frostlanguage$frostc$IR* $tmp92 = *(&local0);
$fn94 $tmp93 = ($fn94) $tmp92->$class->vtable[5];
frost$core$Bit $tmp95 = $tmp93($tmp92);
frost$core$Bit $tmp96 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp95);
bool $tmp97 = $tmp96.value;
if ($tmp97) goto block6; else goto block7;
block6:;
// line 44
org$frostlanguage$frostc$IR* $tmp98 = *(&local0);
org$frostlanguage$frostc$IR$Statement* $tmp99 = (org$frostlanguage$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlanguage$frostc$IR$Statement$class);
frost$core$Int64 $tmp100 = (frost$core$Int64) {1};
org$frostlanguage$frostc$IR$Block$ID $tmp101 = *(&local1);
org$frostlanguage$frostc$IR$Statement$init$frost$core$Int64$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$IR$Block$ID($tmp99, $tmp100, param1, $tmp101);
$fn103 $tmp102 = ($fn103) $tmp98->$class->vtable[2];
org$frostlanguage$frostc$IR$Statement$ID $tmp104 = $tmp102($tmp98, $tmp99);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp99));
// unreffing REF($255:org.frostlanguage.frostc.IR.Statement)
goto block7;
block7:;
// line 46
org$frostlanguage$frostc$IR* $tmp105 = *(&local0);
org$frostlanguage$frostc$IR$Block$ID $tmp106 = *(&local3);
$fn108 $tmp107 = ($fn108) $tmp105->$class->vtable[4];
$tmp107($tmp105, $tmp106);
org$frostlanguage$frostc$IR* $tmp109 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp109));
// unreffing ir
*(&local0) = ((org$frostlanguage$frostc$IR*) NULL);
return;

}
void org$frostlanguage$frostc$statement$While$init(org$frostlanguage$frostc$statement$While* param0) {

return;

}
void org$frostlanguage$frostc$statement$While$cleanup(org$frostlanguage$frostc$statement$While* param0) {

// line 15
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}






