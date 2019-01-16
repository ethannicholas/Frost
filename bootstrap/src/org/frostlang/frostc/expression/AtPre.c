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
#include "org/frostlang/frostc/IR/Block/ID.h"
#include "frost/core/Frost.h"
#include "frost/core/Bit.h"
#include "org/frostlang/frostc/IR/Block.h"
#include "frost/core/Int64.h"


static frost$core$String $s1;
org$frostlang$frostc$expression$AtPre$class_type org$frostlang$frostc$expression$AtPre$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$convert$R$frost$core$String, org$frostlang$frostc$expression$AtPre$cleanup} };

typedef void (*$fn42)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef void (*$fn48)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2e\x41\x74\x50\x72\x65", 37, 3193902449871392646, NULL };
static frost$core$String $s9 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x40\x70\x72\x65\x20\x6d\x61\x79\x20\x6f\x6e\x6c\x79\x20\x62\x65\x20\x75\x73\x65\x64\x20\x77\x69\x74\x68\x69\x6e\x20\x61\x20\x70\x6f\x73\x74\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e", 44, 1718773409211881634, NULL };
static frost$core$String $s22 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x41\x74\x50\x72\x65\x2e\x66\x72\x6f\x73\x74", 11, -717428910631359935, NULL };
static frost$core$String $s23 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x42\x6c\x6f\x63\x6b\x2e\x49\x44\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x42\x6c\x6f\x63\x6b\x2e\x49\x44", 103, 1859744053345217943, NULL };
static frost$core$String $s26 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x75\x73\x65\x20\x40\x70\x72\x65\x20\x69\x6e\x73\x69\x64\x65\x20\x40\x70\x72\x65", 27, 7493574264664769467, NULL };
static frost$core$String $s39 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x41\x74\x50\x72\x65\x2e\x66\x72\x6f\x73\x74", 11, -717428910631359935, NULL };
static frost$core$String $s40 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x42\x6c\x6f\x63\x6b\x2e\x49\x44\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x42\x6c\x6f\x63\x6b\x2e\x49\x44", 103, 1859744053345217943, NULL };

org$frostlang$frostc$IR$Value* org$frostlang$frostc$expression$AtPre$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, org$frostlang$frostc$ASTNode* param2, org$frostlang$frostc$Compiler$TypeContext* param3) {

org$frostlang$frostc$IR* local0 = NULL;
org$frostlang$frostc$IR$Block$ID local1;
org$frostlang$frostc$IR$Value* local2 = NULL;
// line 12
org$frostlang$frostc$IR** $tmp2 = &param0->ir;
org$frostlang$frostc$IR* $tmp3 = *$tmp2;
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp3));
org$frostlang$frostc$IR* $tmp4 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4));
*(&local0) = $tmp3;
// line 13
org$frostlang$frostc$IR$Block$ID$nullable* $tmp5 = &param0->atPreBlock;
org$frostlang$frostc$IR$Block$ID$nullable $tmp6 = *$tmp5;
frost$core$Bit $tmp7 = frost$core$Bit$init$builtin_bit(!$tmp6.nonnull);
bool $tmp8 = $tmp7.value;
if ($tmp8) goto block1; else goto block2;
block1:;
// line 14
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, &$s9);
// line 15
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$IR* $tmp10 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp10));
// unreffing ir
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block2:;
// line 17
org$frostlang$frostc$IR** $tmp11 = &param0->ir;
org$frostlang$frostc$IR* $tmp12 = *$tmp11;
org$frostlang$frostc$IR$Block** $tmp13 = &$tmp12->currentBlock;
org$frostlang$frostc$IR$Block* $tmp14 = *$tmp13;
org$frostlang$frostc$IR$Block$ID* $tmp15 = &$tmp14->id;
org$frostlang$frostc$IR$Block$ID $tmp16 = *$tmp15;
org$frostlang$frostc$IR$Block$ID$nullable* $tmp17 = &param0->atPreBlock;
org$frostlang$frostc$IR$Block$ID$nullable $tmp18 = *$tmp17;
frost$core$Bit $tmp19 = frost$core$Bit$init$builtin_bit($tmp18.nonnull);
bool $tmp20 = $tmp19.value;
if ($tmp20) goto block5; else goto block6;
block6:;
frost$core$Int64 $tmp21 = (frost$core$Int64) {17};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s22, $tmp21, &$s23);
abort(); // unreachable
block5:;
frost$core$Bit $tmp24 = org$frostlang$frostc$IR$Block$ID$$EQ$org$frostlang$frostc$IR$Block$ID$R$frost$core$Bit($tmp16, ((org$frostlang$frostc$IR$Block$ID) $tmp18.value));
bool $tmp25 = $tmp24.value;
if ($tmp25) goto block3; else goto block4;
block3:;
// line 18
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, &$s26);
// line 19
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
org$frostlang$frostc$IR* $tmp27 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp27));
// unreffing ir
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return ((org$frostlang$frostc$IR$Value*) NULL);
block4:;
// line 21
org$frostlang$frostc$IR* $tmp28 = *(&local0);
org$frostlang$frostc$IR$Block** $tmp29 = &$tmp28->currentBlock;
org$frostlang$frostc$IR$Block* $tmp30 = *$tmp29;
org$frostlang$frostc$IR$Block$ID* $tmp31 = &$tmp30->id;
org$frostlang$frostc$IR$Block$ID $tmp32 = *$tmp31;
*(&local1) = $tmp32;
// line 22
org$frostlang$frostc$IR* $tmp33 = *(&local0);
org$frostlang$frostc$IR$Block$ID$nullable* $tmp34 = &param0->atPreBlock;
org$frostlang$frostc$IR$Block$ID$nullable $tmp35 = *$tmp34;
frost$core$Bit $tmp36 = frost$core$Bit$init$builtin_bit($tmp35.nonnull);
bool $tmp37 = $tmp36.value;
if ($tmp37) goto block7; else goto block8;
block8:;
frost$core$Int64 $tmp38 = (frost$core$Int64) {22};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s39, $tmp38, &$s40);
abort(); // unreachable
block7:;
$fn42 $tmp41 = ($fn42) $tmp33->$class->vtable[4];
$tmp41($tmp33, ((org$frostlang$frostc$IR$Block$ID) $tmp35.value));
// line 23
org$frostlang$frostc$IR$Value* $tmp43 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param2, param3);
*(&local2) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp43));
org$frostlang$frostc$IR$Value* $tmp44 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp44));
*(&local2) = $tmp43;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp43));
// unreffing REF($81:org.frostlang.frostc.IR.Value?)
// line 24
org$frostlang$frostc$IR* $tmp45 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp46 = *(&local1);
$fn48 $tmp47 = ($fn48) $tmp45->$class->vtable[4];
$tmp47($tmp45, $tmp46);
// line 25
org$frostlang$frostc$IR$Value* $tmp49 = *(&local2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp49));
org$frostlang$frostc$IR$Value* $tmp50 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp50));
// unreffing result
*(&local2) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp51 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp51));
// unreffing ir
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return $tmp49;

}
void org$frostlang$frostc$expression$AtPre$init(org$frostlang$frostc$expression$AtPre* param0) {

return;

}
void org$frostlang$frostc$expression$AtPre$cleanup(org$frostlang$frostc$expression$AtPre* param0) {

// line 9
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}






