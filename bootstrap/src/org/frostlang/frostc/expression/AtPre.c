#include "org/frostlang/frostc/expression/AtPre.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/IR/Value.h"
#include "org/frostlang/frostc/Compiler.h"
#include "org/frostlang/frostc/Position.h"
#include "org/frostlang/frostc/ASTNode.h"
#include "org/frostlang/frostc/Compiler/TypeContext.h"
#include "org/frostlang/frostc/IR.h"
#include "org/frostlang/frostc/Compiler/AutoAtPreFlag.h"
#include "org/frostlang/frostc/IR/Block/ID.h"
#include "frost/core/Frost.h"
#include "frost/core/Bit.h"
#include "org/frostlang/frostc/IR/Block.h"


static frost$core$String $s1;
org$frostlang$frostc$expression$AtPre$class_type org$frostlang$frostc$expression$AtPre$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$expression$AtPre$cleanup} };

typedef void (*$fn27)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef void (*$fn39)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2e\x41\x74\x50\x72\x65", 37, 8337020099355785226, NULL };
static frost$core$String $s9 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x40\x70\x72\x65\x20\x6d\x61\x79\x20\x6f\x6e\x6c\x79\x20\x62\x65\x20\x75\x73\x65\x64\x20\x77\x69\x74\x68\x69\x6e\x20\x61\x20\x70\x6f\x73\x74\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e", 44, 5635200483790214262, NULL };
static frost$core$String $s14 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x75\x73\x65\x20\x40\x70\x72\x65\x20\x69\x6e\x73\x69\x64\x65\x20\x40\x70\x72\x65", 27, -562802552943005333, NULL };

org$frostlang$frostc$IR$Value* org$frostlang$frostc$expression$AtPre$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, org$frostlang$frostc$ASTNode* param2, org$frostlang$frostc$Compiler$TypeContext* param3) {

org$frostlang$frostc$IR* local0 = NULL;
org$frostlang$frostc$Compiler$AutoAtPreFlag* local1 = NULL;
org$frostlang$frostc$IR$Block$ID local2;
org$frostlang$frostc$IR$Value* local3 = NULL;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/expression/AtPre.frost:13
org$frostlang$frostc$IR** $tmp2 = &param0->ir;
org$frostlang$frostc$IR* $tmp3 = *$tmp2;
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3));
org$frostlang$frostc$IR* $tmp4 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4));
*(&local0) = $tmp3;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/expression/AtPre.frost:14
org$frostlang$frostc$IR$Block$ID$nullable* $tmp5 = &param0->atPreBlock;
org$frostlang$frostc$IR$Block$ID$nullable $tmp6 = *$tmp5;
frost$core$Bit $tmp7 = (frost$core$Bit) {!$tmp6.nonnull};
bool $tmp8 = $tmp7.value;
if ($tmp8) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/expression/AtPre.frost:15
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, &$s9);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/expression/AtPre.frost:16
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$IR* $tmp10 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp10));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/expression/AtPre.frost:18
frost$core$Bit* $tmp11 = &param0->inAtPre;
frost$core$Bit $tmp12 = *$tmp11;
bool $tmp13 = $tmp12.value;
if ($tmp13) goto block3; else goto block4;
block3:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/expression/AtPre.frost:19
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, &$s14);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/expression/AtPre.frost:20
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$IR* $tmp15 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp15));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block4:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/expression/AtPre.frost:22
FROST_ASSERT(24 == sizeof(org$frostlang$frostc$Compiler$AutoAtPreFlag));
org$frostlang$frostc$Compiler$AutoAtPreFlag* $tmp16 = (org$frostlang$frostc$Compiler$AutoAtPreFlag*) frostObjectAlloc(24, (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoAtPreFlag$class);
org$frostlang$frostc$Compiler$AutoAtPreFlag$init$org$frostlang$frostc$Compiler($tmp16, param0);
*(&local1) = ((org$frostlang$frostc$Compiler$AutoAtPreFlag*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp16));
org$frostlang$frostc$Compiler$AutoAtPreFlag* $tmp17 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp17));
*(&local1) = $tmp16;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp16));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/expression/AtPre.frost:23
org$frostlang$frostc$IR* $tmp18 = *(&local0);
org$frostlang$frostc$IR$Block** $tmp19 = &$tmp18->currentBlock;
org$frostlang$frostc$IR$Block* $tmp20 = *$tmp19;
org$frostlang$frostc$IR$Block$ID* $tmp21 = &$tmp20->id;
org$frostlang$frostc$IR$Block$ID $tmp22 = *$tmp21;
*(&local2) = $tmp22;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/expression/AtPre.frost:24
org$frostlang$frostc$IR* $tmp23 = *(&local0);
org$frostlang$frostc$IR$Block$ID$nullable* $tmp24 = &param0->atPreBlock;
org$frostlang$frostc$IR$Block$ID$nullable $tmp25 = *$tmp24;
$fn27 $tmp26 = ($fn27) $tmp23->$class->vtable[4];
$tmp26($tmp23, ((org$frostlang$frostc$IR$Block$ID) $tmp25.value));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/expression/AtPre.frost:25
org$frostlang$frostc$IR$Value* $tmp28 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param2, param3);
*(&local3) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp28));
org$frostlang$frostc$IR$Value* $tmp29 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp29));
*(&local3) = $tmp28;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp28));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/expression/AtPre.frost:26
org$frostlang$frostc$IR* $tmp30 = *(&local0);
org$frostlang$frostc$IR$Block** $tmp31 = &$tmp30->currentBlock;
org$frostlang$frostc$IR$Block* $tmp32 = *$tmp31;
org$frostlang$frostc$IR$Block$ID* $tmp33 = &$tmp32->id;
org$frostlang$frostc$IR$Block$ID $tmp34 = *$tmp33;
org$frostlang$frostc$IR$Block$ID$nullable* $tmp35 = &param0->atPreBlock;
*$tmp35 = ((org$frostlang$frostc$IR$Block$ID$nullable) { $tmp34, true });
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/expression/AtPre.frost:27
org$frostlang$frostc$IR* $tmp36 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp37 = *(&local2);
$fn39 $tmp38 = ($fn39) $tmp36->$class->vtable[4];
$tmp38($tmp36, $tmp37);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/expression/AtPre.frost:28
org$frostlang$frostc$IR$Value* $tmp40 = *(&local3);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp40));
org$frostlang$frostc$IR$Value* $tmp41 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp41));
*(&local3) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$Compiler$AutoAtPreFlag* $tmp42 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp42));
*(&local1) = ((org$frostlang$frostc$Compiler$AutoAtPreFlag*) NULL);
org$frostlang$frostc$IR* $tmp43 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp43));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return $tmp40;

}
void org$frostlang$frostc$expression$AtPre$init(org$frostlang$frostc$expression$AtPre* param0) {

return;

}
void org$frostlang$frostc$expression$AtPre$cleanup(org$frostlang$frostc$expression$AtPre* param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/expression/AtPre.frost:10
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}






