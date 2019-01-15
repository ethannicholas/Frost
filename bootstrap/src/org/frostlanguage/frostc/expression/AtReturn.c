#include "org/frostlanguage/frostc/expression/AtReturn.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlanguage/frostc/IR/Value.h"
#include "org/frostlanguage/frostc/Compiler.h"
#include "org/frostlanguage/frostc/Position.h"
#include "org/frostlanguage/frostc/Compiler/TypeContext.h"
#include "frost/collections/Stack.h"
#include "frost/core/Int64.h"
#include "org/frostlanguage/frostc/MethodDecl.h"
#include "org/frostlanguage/frostc/Type.h"
#include "frost/core/Bit.h"
#include "frost/core/Frost.h"
#include "org/frostlanguage/frostc/IR.h"
#include "org/frostlanguage/frostc/IR/Block.h"
#include "org/frostlanguage/frostc/IR/Block/ID.h"


static frost$core$String $s1;
org$frostlanguage$frostc$expression$AtReturn$class_type org$frostlanguage$frostc$expression$AtReturn$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$convert$R$frost$core$String, org$frostlanguage$frostc$expression$AtReturn$cleanup} };


static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x66\x72\x6f\x73\x74\x63\x2e\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2e\x41\x74\x52\x65\x74\x75\x72\x6e", 44, -9200628669915897555, NULL };
static frost$core$String $s11 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x75\x73\x65\x20\x40\x72\x65\x74\x75\x72\x6e\x20\x69\x6e\x20\x61\x20\x6d\x65\x74\x68\x6f\x64\x20\x77\x68\x69\x63\x68\x20\x64\x6f\x65\x73\x20\x6e\x6f\x74\x20\x68\x61\x76\x65\x20\x61\x20\x72\x65\x74\x75\x72\x6e\x20\x74\x79\x70\x65", 64, -680571356522878436, NULL };
static frost$core$String $s22 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x75\x73\x65\x20\x40\x72\x65\x74\x75\x72\x6e\x20\x69\x6e\x73\x69\x64\x65\x20\x40\x70\x72\x65", 30, 1873157491258318016, NULL };
static frost$core$String $s27 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x63\x61\x6e\x6e\x6f\x74\x20\x75\x73\x65\x20\x40\x72\x65\x74\x75\x72\x6e\x20\x6f\x75\x74\x73\x69\x64\x65\x20\x6f\x66\x20\x61\x20\x70\x6f\x73\x74\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e", 45, -1772045534974692195, NULL };

org$frostlanguage$frostc$IR$Value* org$frostlanguage$frostc$expression$AtReturn$compile$org$frostlanguage$frostc$Compiler$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$Compiler$TypeContext$R$org$frostlanguage$frostc$IR$Value$Q(org$frostlanguage$frostc$Compiler* param0, org$frostlanguage$frostc$Position param1, org$frostlanguage$frostc$Compiler$TypeContext* param2) {

// line 13
frost$collections$Stack** $tmp2 = &param0->currentMethod;
frost$collections$Stack* $tmp3 = *$tmp2;
frost$core$Int64 $tmp4 = (frost$core$Int64) {0};
frost$core$Object* $tmp5 = frost$collections$Stack$$IDX$frost$core$Int64$R$frost$collections$Stack$T($tmp3, $tmp4);
org$frostlanguage$frostc$Type** $tmp6 = &((org$frostlanguage$frostc$MethodDecl*) $tmp5)->returnType;
org$frostlanguage$frostc$Type* $tmp7 = *$tmp6;
org$frostlanguage$frostc$Type* $tmp8 = org$frostlanguage$frostc$Type$Void$R$org$frostlanguage$frostc$Type();
frost$core$Bit $tmp9 = org$frostlanguage$frostc$Type$$EQ$org$frostlanguage$frostc$Type$R$frost$core$Bit($tmp7, $tmp8);
bool $tmp10 = $tmp9.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp8));
// unreffing REF($9:org.frostlanguage.frostc.Type)
frost$core$Frost$unref$frost$core$Object$Q($tmp5);
// unreffing REF($5:frost.collections.Stack.T)
if ($tmp10) goto block1; else goto block2;
block1:;
// line 14
org$frostlanguage$frostc$Compiler$error$org$frostlanguage$frostc$Position$frost$core$String(param0, param1, &$s11);
// line 16
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$IR$Value*) NULL)));
return ((org$frostlanguage$frostc$IR$Value*) NULL);
block2:;
// line 18
org$frostlanguage$frostc$IR** $tmp12 = &param0->ir;
org$frostlanguage$frostc$IR* $tmp13 = *$tmp12;
org$frostlanguage$frostc$IR$Block** $tmp14 = &$tmp13->currentBlock;
org$frostlanguage$frostc$IR$Block* $tmp15 = *$tmp14;
org$frostlanguage$frostc$IR$Block$ID* $tmp16 = &$tmp15->id;
org$frostlanguage$frostc$IR$Block$ID $tmp17 = *$tmp16;
org$frostlanguage$frostc$IR$Block$ID$nullable* $tmp18 = &param0->atPreBlock;
org$frostlanguage$frostc$IR$Block$ID$nullable $tmp19 = *$tmp18;
frost$core$Bit $tmp20 = org$frostlanguage$frostc$IR$Block$ID$$EQ$org$frostlanguage$frostc$IR$Block$ID$R$frost$core$Bit($tmp17, ((org$frostlanguage$frostc$IR$Block$ID) $tmp19.value));
bool $tmp21 = $tmp20.value;
if ($tmp21) goto block3; else goto block4;
block3:;
// line 19
org$frostlanguage$frostc$Compiler$error$org$frostlanguage$frostc$Position$frost$core$String(param0, param1, &$s22);
// line 20
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$IR$Value*) NULL)));
return ((org$frostlanguage$frostc$IR$Value*) NULL);
block4:;
// line 22
org$frostlanguage$frostc$IR$Value** $tmp23 = &param0->returnValue;
org$frostlanguage$frostc$IR$Value* $tmp24 = *$tmp23;
frost$core$Bit $tmp25 = frost$core$Bit$init$builtin_bit($tmp24 == NULL);
bool $tmp26 = $tmp25.value;
if ($tmp26) goto block5; else goto block6;
block5:;
// line 23
org$frostlanguage$frostc$Compiler$error$org$frostlanguage$frostc$Position$frost$core$String(param0, param1, &$s27);
// line 24
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlanguage$frostc$IR$Value*) NULL)));
return ((org$frostlanguage$frostc$IR$Value*) NULL);
block6:;
// line 26
org$frostlanguage$frostc$IR$Value** $tmp28 = &param0->returnValue;
org$frostlanguage$frostc$IR$Value* $tmp29 = *$tmp28;
org$frostlanguage$frostc$IR$Value* $tmp30 = org$frostlanguage$frostc$Compiler$coerce$org$frostlanguage$frostc$Position$org$frostlanguage$frostc$IR$Value$Q$org$frostlanguage$frostc$Compiler$TypeContext$R$org$frostlanguage$frostc$IR$Value$Q(param0, param1, $tmp29, param2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp30));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp30));
// unreffing REF($60:org.frostlanguage.frostc.IR.Value?)
return $tmp30;

}
void org$frostlanguage$frostc$expression$AtReturn$init(org$frostlanguage$frostc$expression$AtReturn* param0) {

return;

}
void org$frostlanguage$frostc$expression$AtReturn$cleanup(org$frostlanguage$frostc$expression$AtReturn* param0) {

// line 10
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}






