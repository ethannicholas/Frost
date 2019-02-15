#include "org/frostlang/frostc/statement/Loop.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/Compiler.h"
#include "org/frostlang/frostc/Position.h"
#include "org/frostlang/frostc/FixedArray.h"
#include "org/frostlang/frostc/IR.h"
#include "org/frostlang/frostc/IR/Block/ID.h"
#include "org/frostlang/frostc/Compiler/AutoContext.h"
#include "org/frostlang/frostc/Compiler/AutoScope.h"
#include "org/frostlang/frostc/ASTNode.h"
#include "frost/core/Frost.h"
#include "org/frostlang/frostc/Compiler/EnclosingContext.h"
#include "frost/core/Int64.h"
#include "org/frostlang/frostc/IR/Statement.h"
#include "org/frostlang/frostc/IR/Statement/ID.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/Iterator.h"
#include "frost/core/Bit.h"


static frost$core$String $s1;
org$frostlang$frostc$statement$Loop$class_type org$frostlang$frostc$statement$Loop$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$statement$Loop$cleanup} };

typedef org$frostlang$frostc$IR$Block$ID (*$fn7)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn12)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn28)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn33)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef frost$collections$Iterator* (*$fn36)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn40)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn45)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn54)(org$frostlang$frostc$IR*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn65)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn70)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x73\x74\x61\x74\x65\x6d\x65\x6e\x74\x2e\x4c\x6f\x6f\x70", 35, 6589831657816811839, NULL };
static frost$core$String $s9 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6c\x6f\x6f\x70\x20\x62\x6f\x64\x79", 9, -1976155174968152447, NULL };
static frost$core$String $s14 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6c\x6f\x6f\x70\x20\x65\x6e\x64", 8, -837180363362312906, NULL };

void org$frostlang$frostc$statement$Loop$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$frost$core$String$Q$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$ASTNode$GT(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, frost$core$String* param2, org$frostlang$frostc$FixedArray* param3) {

org$frostlang$frostc$IR* local0 = NULL;
org$frostlang$frostc$IR$Block$ID local1;
org$frostlang$frostc$IR$Block$ID local2;
org$frostlang$frostc$Compiler$AutoContext* local3 = NULL;
org$frostlang$frostc$Compiler$AutoScope* local4 = NULL;
org$frostlang$frostc$ASTNode* local5 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Loop.frost:17
org$frostlang$frostc$IR** $tmp2 = &param0->ir;
org$frostlang$frostc$IR* $tmp3 = *$tmp2;
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3));
org$frostlang$frostc$IR* $tmp4 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4));
*(&local0) = $tmp3;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Loop.frost:18
org$frostlang$frostc$IR* $tmp5 = *(&local0);
$fn7 $tmp6 = ($fn7) $tmp5->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp8 = $tmp6($tmp5, &$s9);
*(&local1) = $tmp8;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Loop.frost:19
org$frostlang$frostc$IR* $tmp10 = *(&local0);
$fn12 $tmp11 = ($fn12) $tmp10->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp13 = $tmp11($tmp10, &$s14);
*(&local2) = $tmp13;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Loop.frost:21
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Compiler$AutoContext));
org$frostlang$frostc$Compiler$AutoContext* $tmp15 = (org$frostlang$frostc$Compiler$AutoContext*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoContext$class);
FROST_ASSERT(56 == sizeof(org$frostlang$frostc$Compiler$EnclosingContext));
org$frostlang$frostc$Compiler$EnclosingContext* $tmp16 = (org$frostlang$frostc$Compiler$EnclosingContext*) frostObjectAlloc(56, (frost$core$Class*) &org$frostlang$frostc$Compiler$EnclosingContext$class);
frost$core$Int64 $tmp17 = (frost$core$Int64) {1u};
org$frostlang$frostc$IR$Block$ID $tmp18 = *(&local2);
org$frostlang$frostc$IR$Block$ID $tmp19 = *(&local1);
org$frostlang$frostc$Compiler$EnclosingContext$init$frost$core$Int64$frost$core$String$Q$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp16, $tmp17, param2, $tmp18, $tmp19);
org$frostlang$frostc$Compiler$AutoContext$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$Compiler$EnclosingContext($tmp15, param0, $tmp16);
*(&local3) = ((org$frostlang$frostc$Compiler$AutoContext*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp15));
org$frostlang$frostc$Compiler$AutoContext* $tmp20 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp20));
*(&local3) = $tmp15;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp16));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp15));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Loop.frost:22
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$AutoScope));
org$frostlang$frostc$Compiler$AutoScope* $tmp21 = (org$frostlang$frostc$Compiler$AutoScope*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoScope$class);
org$frostlang$frostc$Compiler$AutoScope$init$org$frostlang$frostc$Compiler($tmp21, param0);
*(&local4) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp21));
org$frostlang$frostc$Compiler$AutoScope* $tmp22 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp22));
*(&local4) = $tmp21;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp21));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Loop.frost:23
org$frostlang$frostc$IR* $tmp23 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp24 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp25 = (frost$core$Int64) {1u};
org$frostlang$frostc$IR$Block$ID $tmp26 = *(&local1);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Block$ID($tmp24, $tmp25, param1, $tmp26);
$fn28 $tmp27 = ($fn28) $tmp23->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp29 = $tmp27($tmp23, $tmp24);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp24));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Loop.frost:24
org$frostlang$frostc$IR* $tmp30 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp31 = *(&local1);
$fn33 $tmp32 = ($fn33) $tmp30->$class->vtable[4];
$tmp32($tmp30, $tmp31);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Loop.frost:25
ITable* $tmp34 = ((frost$collections$Iterable*) param3)->$class->itable;
while ($tmp34->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp34 = $tmp34->next;
}
$fn36 $tmp35 = $tmp34->methods[0];
frost$collections$Iterator* $tmp37 = $tmp35(((frost$collections$Iterable*) param3));
goto block1;
block1:;
ITable* $tmp38 = $tmp37->$class->itable;
while ($tmp38->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp38 = $tmp38->next;
}
$fn40 $tmp39 = $tmp38->methods[0];
frost$core$Bit $tmp41 = $tmp39($tmp37);
bool $tmp42 = $tmp41.value;
if ($tmp42) goto block3; else goto block2;
block2:;
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
ITable* $tmp43 = $tmp37->$class->itable;
while ($tmp43->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp43 = $tmp43->next;
}
$fn45 $tmp44 = $tmp43->methods[1];
frost$core$Object* $tmp46 = $tmp44($tmp37);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$ASTNode*) $tmp46)));
org$frostlang$frostc$ASTNode* $tmp47 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp47));
*(&local5) = ((org$frostlang$frostc$ASTNode*) $tmp46);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Loop.frost:26
org$frostlang$frostc$ASTNode* $tmp48 = *(&local5);
org$frostlang$frostc$Compiler$compileStatement$org$frostlang$frostc$ASTNode(param0, $tmp48);
frost$core$Frost$unref$frost$core$Object$Q($tmp46);
org$frostlang$frostc$ASTNode* $tmp49 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp49));
*(&local5) = ((org$frostlang$frostc$ASTNode*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp37));
org$frostlang$frostc$Compiler$AutoScope* $tmp50 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp50));
*(&local4) = ((org$frostlang$frostc$Compiler$AutoScope*) NULL);
org$frostlang$frostc$Compiler$AutoContext* $tmp51 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp51));
*(&local3) = ((org$frostlang$frostc$Compiler$AutoContext*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Loop.frost:29
org$frostlang$frostc$IR* $tmp52 = *(&local0);
$fn54 $tmp53 = ($fn54) $tmp52->$class->vtable[5];
frost$core$Bit $tmp55 = $tmp53($tmp52);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Loop.frost:29:12
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Bit.stub:37
bool $tmp56 = $tmp55.value;
bool $tmp57 = !$tmp56;
frost$core$Bit $tmp58 = (frost$core$Bit) {$tmp57};
bool $tmp59 = $tmp58.value;
if ($tmp59) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Loop.frost:30
org$frostlang$frostc$IR* $tmp60 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp61 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp62 = (frost$core$Int64) {1u};
org$frostlang$frostc$IR$Block$ID $tmp63 = *(&local1);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Block$ID($tmp61, $tmp62, param1, $tmp63);
$fn65 $tmp64 = ($fn65) $tmp60->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp66 = $tmp64($tmp60, $tmp61);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp61));
goto block5;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Loop.frost:32
org$frostlang$frostc$IR* $tmp67 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp68 = *(&local2);
$fn70 $tmp69 = ($fn70) $tmp67->$class->vtable[4];
$tmp69($tmp67, $tmp68);
org$frostlang$frostc$IR* $tmp71 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp71));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;

}
void org$frostlang$frostc$statement$Loop$init(org$frostlang$frostc$statement$Loop* param0) {

return;

}
void org$frostlang$frostc$statement$Loop$cleanup(org$frostlang$frostc$statement$Loop* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Loop.frost:13
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}






