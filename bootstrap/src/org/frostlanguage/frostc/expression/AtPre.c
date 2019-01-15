#include "org/frostlanguage/frostc/expression/AtPre.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlanguage/frostc/IR/Value.h"
#include "org/frostlanguage/frostc/Compiler.h"
#include "org/frostlanguage/frostc/Position.h"
#include "org/frostlanguage/frostc/ASTNode.h"
#include "org/frostlanguage/frostc/Compiler/TypeContext.h"
#include "org/frostlanguage/frostc/IR.h"
#include "org/frostlanguage/frostc/IR/Block/ID.h"
#include "frost/core/Frost.h"
#include "frost/core/Bit.h"
#include "org/frostlanguage/frostc/IR/Block.h"


static frost$core$String $s1;
org$frostlanguage$frostc$expression$AtPre$class_type org$frostlanguage$frostc$expression$AtPre$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$convert$R$frost$core$String, org$frostlanguage$frostc$expression$AtPre$cleanup} };

typedef void (*$fn32)(org$frostlanguage$frostc$IR*, org$frostlanguage$frostc$IR$Block$ID);
typedef void (*$fn38)(org$frostlanguage$frostc$IR*, org$frostlanguage$frostc$IR$Block$ID);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x66\x72\x6f\x73\x74\x63\x2e\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2e\x41\x74\x50\x72\x65", 41, 5751599004409379288, NULL };
static frost$core$String $s9 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x70\x72\x65\x20\x6d\x61\x79\x20\x6f\x6e\x6c\x79\x20\x62\x65\x20\x75\x73\x65\x64\x20\x77\x69\x74\x68\x69\x6e\x20\x61\x20\x70\x6f\x73\x74\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e", 44, 1718773409211881634, NULL };
static frost$core$String $s21 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x75\x73\x65\x20\x40\x70\x72\x65\x20\x69\x6e\x73\x69\x64\x65\x20\x40\x70\x72\x65", 27, 7493574264664769467, NULL };

org$frostlanguage$frostc$IR$Value* org$frostlanguage$frostc$expression$AtPre$compile$org$frostlanguage$frostc$Compiler$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$ASTNode$org$frostlanguage$frostc$Compiler$TypeContext$R$org$frostlanguage$frostc$IR$Value$Q(org$frostlanguage$frostc$Compiler* param0, org$frostlanguage$frostc$Position param1, org$frostlanguage$frostc$ASTNode* param2, org$frostlanguage$frostc$Compiler$TypeContext* param3) {

org$frostlanguage$frostc$IR* local0 = NULL;
org$frostlanguage$frostc$IR$Block$ID local1;
org$frostlanguage$frostc$IR$Value* local2 = NULL;
// line 12
org$frostlanguage$frostc$IR** $tmp2 = &param0->ir;
org$frostlanguage$frostc$IR* $tmp3 = *$tmp2;
*(&local0) = ((org$frostlanguage$frostc$IR*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3));
org$frostlanguage$frostc$IR* $tmp4 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4));
*(&local0) = $tmp3;
// line 13
org$frostlanguage$frostc$IR$Block$ID$nullable* $tmp5 = &param0->atPreBlock;
org$frostlanguage$frostc$IR$Block$ID$nullable $tmp6 = *$tmp5;
frost$core$Bit $tmp7 = frost$core$Bit$init$builtin_bit(!$tmp6.nonnull);
bool $tmp8 = $tmp7.value;
if ($tmp8) goto block1; else goto block2;
block1:;
// line 14
org$frostlanguage$frostc$Compiler$error$org$frostlanguage$frostc$Position$frost$core$String(param0, param1, &$s9);
// line 15
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$IR$Value*) NULL)));
org$frostlanguage$frostc$IR* $tmp10 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp10));
// unreffing ir
*(&local0) = ((org$frostlanguage$frostc$IR*) NULL);
return ((org$frostlanguage$frostc$IR$Value*) NULL);
block2:;
// line 17
org$frostlanguage$frostc$IR** $tmp11 = &param0->ir;
org$frostlanguage$frostc$IR* $tmp12 = *$tmp11;
org$frostlanguage$frostc$IR$Block** $tmp13 = &$tmp12->currentBlock;
org$frostlanguage$frostc$IR$Block* $tmp14 = *$tmp13;
org$frostlanguage$frostc$IR$Block$ID* $tmp15 = &$tmp14->id;
org$frostlanguage$frostc$IR$Block$ID $tmp16 = *$tmp15;
org$frostlanguage$frostc$IR$Block$ID$nullable* $tmp17 = &param0->atPreBlock;
org$frostlanguage$frostc$IR$Block$ID$nullable $tmp18 = *$tmp17;
frost$core$Bit $tmp19 = org$frostlanguage$frostc$IR$Block$ID$$EQ$org$frostlanguage$frostc$IR$Block$ID$R$frost$core$Bit($tmp16, ((org$frostlanguage$frostc$IR$Block$ID) $tmp18.value));
bool $tmp20 = $tmp19.value;
if ($tmp20) goto block3; else goto block4;
block3:;
// line 18
org$frostlanguage$frostc$Compiler$error$org$frostlanguage$frostc$Position$frost$core$String(param0, param1, &$s21);
// line 19
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$IR$Value*) NULL)));
org$frostlanguage$frostc$IR* $tmp22 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp22));
// unreffing ir
*(&local0) = ((org$frostlanguage$frostc$IR*) NULL);
return ((org$frostlanguage$frostc$IR$Value*) NULL);
block4:;
// line 21
org$frostlanguage$frostc$IR* $tmp23 = *(&local0);
org$frostlanguage$frostc$IR$Block** $tmp24 = &$tmp23->currentBlock;
org$frostlanguage$frostc$IR$Block* $tmp25 = *$tmp24;
org$frostlanguage$frostc$IR$Block$ID* $tmp26 = &$tmp25->id;
org$frostlanguage$frostc$IR$Block$ID $tmp27 = *$tmp26;
*(&local1) = $tmp27;
// line 22
org$frostlanguage$frostc$IR* $tmp28 = *(&local0);
org$frostlanguage$frostc$IR$Block$ID$nullable* $tmp29 = &param0->atPreBlock;
org$frostlanguage$frostc$IR$Block$ID$nullable $tmp30 = *$tmp29;
$fn32 $tmp31 = ($fn32) $tmp28->$class->vtable[4];
$tmp31($tmp28, ((org$frostlanguage$frostc$IR$Block$ID) $tmp30.value));
// line 23
org$frostlanguage$frostc$IR$Value* $tmp33 = org$frostlanguage$frostc$Compiler$compileExpression$org$frostlanguage$frostc$ASTNode$org$frostlanguage$frostc$Compiler$TypeContext$R$org$frostlanguage$frostc$IR$Value$Q(param0, param2, param3);
*(&local2) = ((org$frostlanguage$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp33));
org$frostlanguage$frostc$IR$Value* $tmp34 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp34));
*(&local2) = $tmp33;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp33));
// unreffing REF($67:org.frostlanguage.frostc.IR.Value?)
// line 24
org$frostlanguage$frostc$IR* $tmp35 = *(&local0);
org$frostlanguage$frostc$IR$Block$ID $tmp36 = *(&local1);
$fn38 $tmp37 = ($fn38) $tmp35->$class->vtable[4];
$tmp37($tmp35, $tmp36);
// line 25
org$frostlanguage$frostc$IR$Value* $tmp39 = *(&local2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp39));
org$frostlanguage$frostc$IR$Value* $tmp40 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp40));
// unreffing result
*(&local2) = ((org$frostlanguage$frostc$IR$Value*) NULL);
org$frostlanguage$frostc$IR* $tmp41 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp41));
// unreffing ir
*(&local0) = ((org$frostlanguage$frostc$IR*) NULL);
return $tmp39;

}
void org$frostlanguage$frostc$expression$AtPre$init(org$frostlanguage$frostc$expression$AtPre* param0) {

return;

}
void org$frostlanguage$frostc$expression$AtPre$cleanup(org$frostlanguage$frostc$expression$AtPre* param0) {

// line 9
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}






