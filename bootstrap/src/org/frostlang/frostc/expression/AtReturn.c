#include "org/frostlang/frostc/expression/AtReturn.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/IR/Value.h"
#include "org/frostlang/frostc/Compiler.h"
#include "org/frostlang/frostc/Position.h"
#include "org/frostlang/frostc/Compiler/TypeContext.h"
#include "frost/collections/Stack.h"
#include "frost/core/Int64.h"
#include "org/frostlang/frostc/MethodDecl.h"
#include "org/frostlang/frostc/Type.h"
#include "frost/core/Bit.h"
#include "frost/core/Frost.h"
#include "org/frostlang/frostc/IR.h"
#include "org/frostlang/frostc/IR/Block.h"
#include "org/frostlang/frostc/IR/Block/ID.h"


static frost$core$String $s1;
org$frostlang$frostc$expression$AtReturn$class_type org$frostlang$frostc$expression$AtReturn$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$convert$R$frost$core$String, org$frostlang$frostc$expression$AtReturn$cleanup} };


static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2e\x41\x74\x52\x65\x74\x75\x72\x6e", 40, 3106184065904966883, NULL };
static frost$core$String $s11 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x75\x73\x65\x20\x40\x72\x65\x74\x75\x72\x6e\x20\x69\x6e\x20\x61\x20\x6d\x65\x74\x68\x6f\x64\x20\x77\x68\x69\x63\x68\x20\x64\x6f\x65\x73\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x61\x20\x72\x65\x74\x75\x72\x6e\x20\x74\x79\x70\x65", 64, -680571356522878436, NULL };
static frost$core$String $s23 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x41\x74\x52\x65\x74\x75\x72\x6e\x2e\x66\x72\x6f\x73\x74", 14, 6130248956606714618, NULL };
static frost$core$String $s24 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x42\x6c\x6f\x63\x6b\x2e\x49\x44\x3f\x20\x74\x6f\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x52\x2e\x42\x6c\x6f\x63\x6b\x2e\x49\x44", 103, 1859744053345217943, NULL };
static frost$core$String $s27 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x75\x73\x65\x20\x40\x72\x65\x74\x75\x72\x6e\x20\x69\x6e\x73\x69\x64\x65\x20\x40\x70\x72\x65", 30, 1873157491258318016, NULL };
static frost$core$String $s32 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x75\x73\x65\x20\x40\x72\x65\x74\x75\x72\x6e\x20\x6f\x75\x74\x73\x69\x64\x65\x20\x6f\x66\x20\x61\x20\x70\x6f\x73\x74\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e", 45, -1772045534974692195, NULL };

org$frostlang$frostc$IR$Value* org$frostlang$frostc$expression$AtReturn$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, org$frostlang$frostc$Compiler$TypeContext* param2) {

// line 13
frost$collections$Stack** $tmp2 = &param0->currentMethod;
frost$collections$Stack* $tmp3 = *$tmp2;
frost$core$Int64 $tmp4 = (frost$core$Int64) {0};
frost$core$Object* $tmp5 = frost$collections$Stack$$IDX$frost$core$Int64$R$frost$collections$Stack$T($tmp3, $tmp4);
org$frostlang$frostc$Type** $tmp6 = &((org$frostlang$frostc$MethodDecl*) $tmp5)->returnType;
org$frostlang$frostc$Type* $tmp7 = *$tmp6;
org$frostlang$frostc$Type* $tmp8 = org$frostlang$frostc$Type$Void$R$org$frostlang$frostc$Type();
frost$core$Bit $tmp9 = org$frostlang$frostc$Type$$EQ$org$frostlang$frostc$Type$R$frost$core$Bit($tmp7, $tmp8);
bool $tmp10 = $tmp9.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp8));
// unreffing REF($9:org.frostlang.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q($tmp5);
// unreffing REF($5:frost.collections.Stack.T)
if ($tmp10) goto block1; else goto block2;
block1:;
// line 14
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, &$s11);
// line 16
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
return ((org$frostlang$frostc$IR$Value*) NULL);
block2:;
// line 18
org$frostlang$frostc$IR** $tmp12 = &param0->ir;
org$frostlang$frostc$IR* $tmp13 = *$tmp12;
org$frostlang$frostc$IR$Block** $tmp14 = &$tmp13->currentBlock;
org$frostlang$frostc$IR$Block* $tmp15 = *$tmp14;
org$frostlang$frostc$IR$Block$ID* $tmp16 = &$tmp15->id;
org$frostlang$frostc$IR$Block$ID $tmp17 = *$tmp16;
org$frostlang$frostc$IR$Block$ID$nullable* $tmp18 = &param0->atPreBlock;
org$frostlang$frostc$IR$Block$ID$nullable $tmp19 = *$tmp18;
frost$core$Bit $tmp20 = frost$core$Bit$init$builtin_bit($tmp19.nonnull);
bool $tmp21 = $tmp20.value;
if ($tmp21) goto block5; else goto block6;
block6:;
frost$core$Int64 $tmp22 = (frost$core$Int64) {18};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s23, $tmp22, &$s24);
abort(); // unreachable
block5:;
frost$core$Bit $tmp25 = org$frostlang$frostc$IR$Block$ID$$EQ$org$frostlang$frostc$IR$Block$ID$R$frost$core$Bit($tmp17, ((org$frostlang$frostc$IR$Block$ID) $tmp19.value));
bool $tmp26 = $tmp25.value;
if ($tmp26) goto block3; else goto block4;
block3:;
// line 19
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, &$s27);
// line 20
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
return ((org$frostlang$frostc$IR$Value*) NULL);
block4:;
// line 22
org$frostlang$frostc$IR$Value** $tmp28 = &param0->returnValue;
org$frostlang$frostc$IR$Value* $tmp29 = *$tmp28;
frost$core$Bit $tmp30 = frost$core$Bit$init$builtin_bit($tmp29 == NULL);
bool $tmp31 = $tmp30.value;
if ($tmp31) goto block7; else goto block8;
block7:;
// line 23
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(param0, param1, &$s32);
// line 24
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$IR$Value*) NULL)));
return ((org$frostlang$frostc$IR$Value*) NULL);
block8:;
// line 26
org$frostlang$frostc$IR$Value** $tmp33 = &param0->returnValue;
org$frostlang$frostc$IR$Value* $tmp34 = *$tmp33;
org$frostlang$frostc$IR$Value* $tmp35 = org$frostlang$frostc$Compiler$coerce$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, $tmp34, param2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp35));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp35));
// unreffing REF($67:org.frostlang.frostc.IR.Value?)
return $tmp35;

}
void org$frostlang$frostc$expression$AtReturn$init(org$frostlang$frostc$expression$AtReturn* param0) {

return;

}
void org$frostlang$frostc$expression$AtReturn$cleanup(org$frostlang$frostc$expression$AtReturn* param0) {

// line 10
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}






