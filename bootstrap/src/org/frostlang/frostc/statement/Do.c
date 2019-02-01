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
#include "frost/core/Frost.h"
#include "org/frostlang/frostc/Compiler/EnclosingContext.h"
#include "frost/core/Int64.h"
#include "org/frostlang/frostc/IR/Statement.h"
#include "org/frostlang/frostc/IR/Statement/ID.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/Iterator.h"
#include "frost/core/Bit.h"


static frost$core$String $s1;
org$frostlang$frostc$statement$Do$class_type org$frostlang$frostc$statement$Do$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$statement$Do$cleanup} };

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
typedef void (*$fn79)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x73\x74\x61\x74\x65\x6d\x65\x6e\x74\x2e\x44\x6f", 33, 7038380079964922642, NULL };
static frost$core$String $s9 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x64\x6f\x20\x62\x6f\x64\x79", 7, 214535603471274, NULL };
static frost$core$String $s14 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x64\x6f\x20\x74\x65\x73\x74", 7, 214535621916192, NULL };
static frost$core$String $s19 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x64\x6f\x20\x65\x6e\x64", 6, 2124114916355, NULL };

void org$frostlang$frostc$statement$Do$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$ASTNode(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, frost$core$String* param2, org$frostlang$frostc$FixedArray* param3, org$frostlang$frostc$ASTNode* param4) {

org$frostlang$frostc$IR* local0 = NULL;
org$frostlang$frostc$IR$Block$ID local1;
org$frostlang$frostc$IR$Block$ID local2;
org$frostlang$frostc$IR$Block$ID local3;
org$frostlang$frostc$Compiler$AutoContext* local4 = NULL;
org$frostlang$frostc$Compiler$AutoScope* local5 = NULL;
org$frostlang$frostc$ASTNode* local6 = NULL;
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
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Compiler$AutoContext));
org$frostlang$frostc$Compiler$AutoContext* $tmp20 = (org$frostlang$frostc$Compiler$AutoContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoContext$class);
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$Compiler$EnclosingContext));
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
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp20));
// line 25
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$AutoScope));
org$frostlang$frostc$Compiler$AutoScope* $tmp26 = (org$frostlang$frostc$Compiler$AutoScope*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoScope$class);
org$frostlang$frostc$Compiler$AutoScope$init$org$frostlang$frostc$Compiler($tmp26, param0);
*(&local5) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp26));
org$frostlang$frostc$Compiler$AutoScope* $tmp27 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp27));
*(&local5) = $tmp26;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp26));
// line 26
org$frostlang$frostc$IR* $tmp28 = *(&local0);
FROST_ASSERT(72 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp29 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp30 = (frost$core$Int64) {1};
org$frostlang$frostc$IR$Block$ID $tmp31 = *(&local1);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Block$ID($tmp29, $tmp30, param1, $tmp31);
$fn33 $tmp32 = ($fn33) $tmp28->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp34 = $tmp32($tmp28, $tmp29);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp29));
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
org$frostlang$frostc$ASTNode* $tmp54 = *(&local6);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp54));
*(&local6) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp42));
org$frostlang$frostc$Compiler$AutoScope* $tmp55 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp55));
*(&local5) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
org$frostlang$frostc$Compiler$AutoContext* $tmp56 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp56));
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
FROST_ASSERT(72 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp64 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(72, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp65 = (frost$core$Int64) {1};
org$frostlang$frostc$IR$Block$ID $tmp66 = *(&local2);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Block$ID($tmp64, $tmp65, param1, $tmp66);
$fn68 $tmp67 = ($fn68) $tmp63->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp69 = $tmp67($tmp63, $tmp64);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp64));
goto block5;
block5:;
// line 35
org$frostlang$frostc$IR* $tmp70 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp71 = *(&local2);
$fn73 $tmp72 = ($fn73) $tmp70->$class->vtable[4];
$tmp72($tmp70, $tmp71);
// line 36
org$frostlang$frostc$IR$Block$ID $tmp74 = *(&local1);
org$frostlang$frostc$IR$Block$ID $tmp75 = *(&local3);
org$frostlang$frostc$Compiler$compileConditionalBranch$org$frostlang$frostc$ASTNode$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID(param0, param4, $tmp74, $tmp75);
// line 37
org$frostlang$frostc$IR* $tmp76 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp77 = *(&local3);
$fn79 $tmp78 = ($fn79) $tmp76->$class->vtable[4];
$tmp78($tmp76, $tmp77);
org$frostlang$frostc$IR* $tmp80 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp80));
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






